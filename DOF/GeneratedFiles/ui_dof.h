/********************************************************************************
** Form generated from reading UI file 'dof.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOF_H
#define UI_DOF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DOFClass
{
public:
    QWidget *centralWidget;
    QLabel *label_5;
    QFrame *line;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_2;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QSpinBox *spinBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *DOFClass)
    {
        if (DOFClass->objectName().isEmpty())
            DOFClass->setObjectName(QStringLiteral("DOFClass"));
        DOFClass->resize(768, 630);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DOFClass->sizePolicy().hasHeightForWidth());
        DOFClass->setSizePolicy(sizePolicy);
        DOFClass->setMinimumSize(QSize(768, 630));
        DOFClass->setMaximumSize(QSize(768, 630));
        centralWidget = new QWidget(DOFClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 10, 231, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(22);
        label_5->setFont(font);
        label_5->setFocusPolicy(Qt::TabFocus);
        label_5->setTextFormat(Qt::RichText);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 50, 684, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 686, 511));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(doubleSpinBox, 0, 3, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 1, 3, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 3);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setSingleStep(0.01);

        gridLayout->addWidget(doubleSpinBox_2, 2, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
        spinBox_2->setMinimumSize(QSize(100, 0));
        spinBox_2->setMaximum(999999999);

        gridLayout->addWidget(spinBox_2, 3, 2, 1, 2);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 4, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        sizePolicy2.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy2);
        spinBox_3->setMinimumSize(QSize(100, 0));
        spinBox_3->setMaximum(999999999);

        gridLayout->addWidget(spinBox_3, 3, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 6, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 7, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setMinimumSize(QSize(100, 0));
        spinBox_4->setMaximum(999999999);

        gridLayout->addWidget(spinBox_4, 3, 8, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pushButton, 1, 7, 1, 2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/File/Resources/bangzhu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 2, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFocusPolicy(Qt::StrongFocus);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideMiddle);

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);

        DOFClass->setCentralWidget(centralWidget);

        retranslateUi(DOFClass);

        QMetaObject::connectSlotsByName(DOFClass);
    } // setupUi

    void retranslateUi(QMainWindow *DOFClass)
    {
        DOFClass->setWindowTitle(QApplication::translate("DOFClass", "DOF", 0));
        label_5->setText(QApplication::translate("DOFClass", "\346\231\257\346\267\261\350\256\241\347\256\227\345\267\245\345\205\267", 0));
        label_3->setText(QApplication::translate("DOFClass", "F Number:", 0));
        label->setText(QApplication::translate("DOFClass", "\347\204\246\350\267\235f\357\274\210mm\357\274\211:", 0));
        label_4->setText(QApplication::translate("DOFClass", "\345\205\201\350\256\270\345\274\245\346\225\243\346\226\221\347\233\264\345\276\204B\357\274\210mm\357\274\211:", 0));
        label_2->setText(QApplication::translate("DOFClass", "\347\211\251\350\267\235\350\214\203\345\233\264\357\274\210mm\357\274\211:", 0));
        label_6->setText(QApplication::translate("DOFClass", "MIN", 0));
        label_7->setText(QApplication::translate("DOFClass", "MAX", 0));
        label_8->setText(QApplication::translate("DOFClass", "\346\255\245\350\277\233\345\200\274", 0));
        pushButton->setText(QApplication::translate("DOFClass", "\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class DOFClass: public Ui_DOFClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOF_H
