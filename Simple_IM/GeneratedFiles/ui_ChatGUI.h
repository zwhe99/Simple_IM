/********************************************************************************
** Form generated from reading UI file 'ChatGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATGUI_H
#define UI_CHATGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ChatGUI
{
public:
    QTextBrowser *log_textBrowser;
    QFrame *line;
    QTextEdit *msg_textEdit;
    QPushButton *pushButton;
    QLabel *peerName_label;

    void setupUi(QDialog *ChatGUI)
    {
        if (ChatGUI->objectName().isEmpty())
            ChatGUI->setObjectName(QStringLiteral("ChatGUI"));
        ChatGUI->resize(484, 489);
        log_textBrowser = new QTextBrowser(ChatGUI);
        log_textBrowser->setObjectName(QStringLiteral("log_textBrowser"));
        log_textBrowser->setGeometry(QRect(10, 60, 461, 261));
        line = new QFrame(ChatGUI);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 30, 491, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        msg_textEdit = new QTextEdit(ChatGUI);
        msg_textEdit->setObjectName(QStringLiteral("msg_textEdit"));
        msg_textEdit->setGeometry(QRect(10, 350, 461, 91));
        pushButton = new QPushButton(ChatGUI);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 450, 75, 23));
        peerName_label = new QLabel(ChatGUI);
        peerName_label->setObjectName(QStringLiteral("peerName_label"));
        peerName_label->setGeometry(QRect(10, 20, 111, 16));
        peerName_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(ChatGUI);

        QMetaObject::connectSlotsByName(ChatGUI);
    } // setupUi

    void retranslateUi(QDialog *ChatGUI)
    {
        ChatGUI->setWindowTitle(QApplication::translate("ChatGUI", "ChatGUI", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChatGUI", "Send", Q_NULLPTR));
        peerName_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatGUI: public Ui_ChatGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATGUI_H
