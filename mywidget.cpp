#include "mywidget.h"
#include "ui_mywidget.h"

#include <QFile>
#include <QFileDialog>

QString mFilename="C:/test/myfile.txt";

void Write(QString Filename,QString str)
{
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){

        qDebug() <<"open file failed";
        return;
    }
    QTextStream out (&mFile);
    out<<str;
    mFile.flush();
    mFile.close();

}

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::myWidget)
{
    ui->setupUi(this);
    ui->contactbook->setColumnCount(4);
    QStringList ColTotal;
    ColTotal<<"學號"<<"班級"<<"姓名"<<"電話";
    ui->contactbook->setHorizontalHeaderLabels(ColTotal);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_insertButton_clicked()
{
    QTableWidgetItem *col1,*col2,*col3,*col4;
    col1=new QTableWidgetItem(ui->lineEdit_1->text());
    col2=new QTableWidgetItem(ui->lineEdit_2->text());
    col3=new QTableWidgetItem(ui->lineEdit_3->text());
    col4=new QTableWidgetItem(ui->lineEdit_4->text());
    int row=ui->contactbook->rowCount();
    qDebug()<<row;
    ui->contactbook->insertRow(row);
    ui->contactbook->setItem(row,0,col1);
    ui->contactbook->setItem(row,1,col2);
    ui->contactbook->setItem(row,2,col3);
    ui->contactbook->setItem(row,3,col4);
}
void CbWrite(QString fileName,QString str)
{
    QFile outFile(fileName);
    if(!outFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug()<<"Open File Failed";
        return;
    }
    QTextStream out(&outFile);
    out.setEncoding(QStringConverter::System );
    out<<str;
    outFile.flush();
    outFile.close();

}

void myWidget::on_exportButton_clicked()
{
    QString fileName;
    QString saveStr;
    fileName == QFileDialog::getSaveFileName(this,"匯出通訊錄",".","csv(*.csv)::txt(*.txt)");

    for(int i=0;i<ui->contactbook->rowCount();i++)
    {
        for(int j=0;j<ui->contactbook->columnCount();j++)
        {
            saveStr +=ui->contactbook->item(i,j)->text()+(j<ui->contactbook->columnCount() ? "," :"");
        }

    saveStr+="\n";
    }
    CbWrite(fileName,saveStr);

}

