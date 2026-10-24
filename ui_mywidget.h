/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *contactbook;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *lineEdit_1;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QPushButton *exportButton;
    QPushButton *insertButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *importButton;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName("myWidget");
        myWidget->resize(733, 449);
        verticalLayout = new QVBoxLayout(myWidget);
        verticalLayout->setObjectName("verticalLayout");
        contactbook = new QTableWidget(myWidget);
        contactbook->setObjectName("contactbook");

        verticalLayout->addWidget(contactbook);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        label_1 = new QLabel(myWidget);
        label_1->setObjectName("label_1");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_1);

        lineEdit_1 = new QLineEdit(myWidget);
        lineEdit_1->setObjectName("lineEdit_1");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_1);

        label_2 = new QLabel(myWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(myWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_2);

        lineEdit_4 = new QLineEdit(myWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_4);

        label_3 = new QLabel(myWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(myWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_3);

        label_4 = new QLabel(myWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        exportButton = new QPushButton(myWidget);
        exportButton->setObjectName("exportButton");

        gridLayout->addWidget(exportButton, 0, 2, 1, 1);

        insertButton = new QPushButton(myWidget);
        insertButton->setObjectName("insertButton");

        gridLayout->addWidget(insertButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        importButton = new QPushButton(myWidget);
        importButton->setObjectName("importButton");

        gridLayout->addWidget(importButton, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QCoreApplication::translate("myWidget", "myWidget", nullptr));
        label_1->setText(QCoreApplication::translate("myWidget", "\345\255\270\350\231\237:", nullptr));
        label_2->setText(QCoreApplication::translate("myWidget", "\347\217\255\347\264\232:", nullptr));
        label_3->setText(QCoreApplication::translate("myWidget", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("myWidget", "\351\233\273\350\251\261:", nullptr));
        exportButton->setText(QCoreApplication::translate("myWidget", "\345\214\257\345\207\272", nullptr));
        insertButton->setText(QCoreApplication::translate("myWidget", "\346\226\260\345\242\236", nullptr));
        importButton->setText(QCoreApplication::translate("myWidget", "\345\214\257\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
