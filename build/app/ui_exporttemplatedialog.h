#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'exporttemplatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTTEMPLATEDIALOG_H
#define UI_EXPORTTEMPLATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportTemplateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *optionsLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *appletsTable;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *selectAllBtn;
    QPushButton *deselectAllBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *fileTabLbl;
    QLabel *fileLbl;
    QPushButton *chooseBtn;
    QLabel *noteLbl;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportTemplateDialog)
    {
        if (ExportTemplateDialog->objectName().isEmpty())
            ExportTemplateDialog->setObjectName("ExportTemplateDialog");
        ExportTemplateDialog->resize(561, 615);
        ExportTemplateDialog->setWindowTitle(QString::fromUtf8("Export Template"));
        verticalLayout = new QVBoxLayout(ExportTemplateDialog);
        verticalLayout->setObjectName("verticalLayout");
        optionsLayout = new QHBoxLayout();
        optionsLayout->setObjectName("optionsLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        appletsTable = new QTableView(ExportTemplateDialog);
        appletsTable->setObjectName("appletsTable");
        appletsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        appletsTable->horizontalHeader()->setHighlightSections(false);
        appletsTable->horizontalHeader()->setStretchLastSection(true);
        appletsTable->verticalHeader()->setVisible(false);
        appletsTable->verticalHeader()->setHighlightSections(false);

        verticalLayout_2->addWidget(appletsTable);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        selectAllBtn = new QPushButton(ExportTemplateDialog);
        selectAllBtn->setObjectName("selectAllBtn");

        horizontalLayout_2->addWidget(selectAllBtn);

        deselectAllBtn = new QPushButton(ExportTemplateDialog);
        deselectAllBtn->setObjectName("deselectAllBtn");

        horizontalLayout_2->addWidget(deselectAllBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        fileTabLbl = new QLabel(ExportTemplateDialog);
        fileTabLbl->setObjectName("fileTabLbl");
        QFont font;
        font.setBold(true);
        fileTabLbl->setFont(font);

        horizontalLayout->addWidget(fileTabLbl);

        fileLbl = new QLabel(ExportTemplateDialog);
        fileLbl->setObjectName("fileLbl");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileLbl->sizePolicy().hasHeightForWidth());
        fileLbl->setSizePolicy(sizePolicy);
        fileLbl->setText(QString::fromUtf8("~/.config/latte/layouts/....."));

        horizontalLayout->addWidget(fileLbl);

        chooseBtn = new QPushButton(ExportTemplateDialog);
        chooseBtn->setObjectName("chooseBtn");

        horizontalLayout->addWidget(chooseBtn);


        verticalLayout_2->addLayout(horizontalLayout);

        noteLbl = new QLabel(ExportTemplateDialog);
        noteLbl->setObjectName("noteLbl");
        noteLbl->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        noteLbl->setWordWrap(true);

        verticalLayout_2->addWidget(noteLbl);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        optionsLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(optionsLayout);

        buttonBox = new QDialogButtonBox(ExportTemplateDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportTemplateDialog);

        QMetaObject::connectSlotsByName(ExportTemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportTemplateDialog)
    {
        selectAllBtn->setText(tr2i18n("Select All", nullptr));
        deselectAllBtn->setText(tr2i18n("Deselect All", nullptr));
        fileTabLbl->setText(tr2i18n("File:", nullptr));
        chooseBtn->setText(tr2i18n("Choose...", nullptr));
        noteLbl->setText(tr2i18n("<b>Select only</b> applets that you would like to keep their settings in the extracted template. Make sure to not include any applets that contain personal data such as email credentials, calendar etc. ", nullptr));
        (void)ExportTemplateDialog;
    } // retranslateUi

};

namespace Ui {
    class ExportTemplateDialog: public Ui_ExportTemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EXPORTTEMPLATEDIALOG_H

