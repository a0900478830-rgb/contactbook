#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class myWidget;
}
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget() override;

private slots:



    void on_insertButton_clicked();

    void on_exportButton_clicked();

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
