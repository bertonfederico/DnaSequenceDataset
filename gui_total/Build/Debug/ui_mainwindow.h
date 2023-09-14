/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QTextBrowser *output;
    QTextBrowser *version;
    QTextBrowser *description_input;
    QTextBrowser *description_output;
    QTextBrowser *description_version;
    QTextBrowser *input;
    QFrame *frame_2;
    QLineEdit *input_file_field;
    QLineEdit *output_file_field;
    QTextBrowser *description_output_directory;
    QTextBrowser *description_n;
    QLineEdit *parameter_n_field;
    QTextBrowser *description_k;
    QLineEdit *parameter_k_field;
    QPushButton *run_button;
    QTextBrowser *description_input_file_path;
    QLabel *input_file_check;
    QLabel *output_file_check;
    QLabel *parameter_n_check;
    QLabel *parameter_k_check;
    QFrame *frame_3;
    QFrame *frame_6;
    QTextBrowser *description_test;
    QLineEdit *test_f_it;
    QLineEdit *test_f_m;
    QLineEdit *test_p_it;
    QLineEdit *test_p_m;
    QLineEdit *test_tot;
    QFrame *frame_7;
    QTextBrowser *description_output_files;
    QLineEdit *csv_name_wall;
    QLineEdit *csv_name_partial;
    QTextBrowser *description_cpu;
    QTextBrowser *description_wall;
    QTextBrowser *description_partial;
    QTextBrowser *description_full;
    QTextBrowser *description_full_it;
    QTextBrowser *description_full_m;
    QTextBrowser *description_partial_it;
    QTextBrowser *description_partial_m;
    QProgressBar *progressBar;
    QLineEdit *csv_name_p_changes;
    QTextBrowser *description_p_changes;
    QTextBrowser *description_r_selected;
    QLineEdit *csv_name_r_selected;
    QTextBrowser *description_total_test;
    QTextBrowser *title_input;
    QTextBrowser *title_output;
    QTextBrowser *title_info;
    QLabel *label_info;
    QLabel *label_input;
    QLabel *label_output;
    QLabel *label_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1570, 969);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setSizeIncrement(QSize(0, 0));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(310, 80, 1231, 181));
        frame->setFrameShape(QFrame::Box);
        frame->setLineWidth(1);
        output = new QTextBrowser(frame);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(490, 80, 281, 68));
        version = new QTextBrowser(frame);
        version->setObjectName(QString::fromUtf8("version"));
        version->setGeometry(QRect(790, 80, 421, 68));
        description_input = new QTextBrowser(frame);
        description_input->setObjectName(QString::fromUtf8("description_input"));
        description_input->setEnabled(false);
        description_input->setGeometry(QRect(20, 40, 451, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(217, 217, 217, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(181, 181, 181, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(72, 72, 72, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(97, 97, 97, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(200, 200, 200, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_input->setPalette(palette);
        QFont font;
        font.setPointSize(9);
        description_input->setFont(font);
        description_input->setFrameShape(QFrame::Box);
        description_output = new QTextBrowser(frame);
        description_output->setObjectName(QString::fromUtf8("description_output"));
        description_output->setEnabled(false);
        description_output->setGeometry(QRect(490, 40, 281, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_output->setPalette(palette1);
        description_output->setFont(font);
        description_output->setFrameShape(QFrame::Box);
        description_version = new QTextBrowser(frame);
        description_version->setObjectName(QString::fromUtf8("description_version"));
        description_version->setEnabled(false);
        description_version->setGeometry(QRect(790, 40, 421, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_version->setPalette(palette2);
        description_version->setFont(font);
        description_version->setFrameShape(QFrame::Box);
        input = new QTextBrowser(frame);
        input->setObjectName(QString::fromUtf8("input"));
        input->setEnabled(true);
        input->setGeometry(QRect(20, 80, 451, 68));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        input->setPalette(palette3);
        input->setAutoFillBackground(false);
        input->setFrameShape(QFrame::StyledPanel);
        input->setLineWidth(1);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(310, 280, 1231, 291));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setLineWidth(1);
        input_file_field = new QLineEdit(frame_2);
        input_file_field->setObjectName(QString::fromUtf8("input_file_field"));
        input_file_field->setGeometry(QRect(430, 27, 691, 31));
        input_file_field->setFont(font);
        input_file_field->setAlignment(Qt::AlignCenter);
        output_file_field = new QLineEdit(frame_2);
        output_file_field->setObjectName(QString::fromUtf8("output_file_field"));
        output_file_field->setGeometry(QRect(430, 77, 691, 31));
        output_file_field->setFont(font);
        output_file_field->setAlignment(Qt::AlignCenter);
        description_output_directory = new QTextBrowser(frame_2);
        description_output_directory->setObjectName(QString::fromUtf8("description_output_directory"));
        description_output_directory->setEnabled(false);
        description_output_directory->setGeometry(QRect(40, 77, 341, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_output_directory->setPalette(palette4);
        description_output_directory->setFont(font);
        description_output_directory->setFrameShape(QFrame::Box);
        description_n = new QTextBrowser(frame_2);
        description_n->setObjectName(QString::fromUtf8("description_n"));
        description_n->setEnabled(false);
        description_n->setGeometry(QRect(40, 127, 341, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_n->setPalette(palette5);
        description_n->setFont(font);
        description_n->setFrameShape(QFrame::Box);
        parameter_n_field = new QLineEdit(frame_2);
        parameter_n_field->setObjectName(QString::fromUtf8("parameter_n_field"));
        parameter_n_field->setGeometry(QRect(430, 127, 691, 31));
        parameter_n_field->setFont(font);
        parameter_n_field->setFrame(true);
        parameter_n_field->setAlignment(Qt::AlignCenter);
        parameter_n_field->setClearButtonEnabled(false);
        description_k = new QTextBrowser(frame_2);
        description_k->setObjectName(QString::fromUtf8("description_k"));
        description_k->setEnabled(false);
        description_k->setGeometry(QRect(40, 177, 341, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_k->setPalette(palette6);
        description_k->setFont(font);
        description_k->setFrameShape(QFrame::Box);
        parameter_k_field = new QLineEdit(frame_2);
        parameter_k_field->setObjectName(QString::fromUtf8("parameter_k_field"));
        parameter_k_field->setGeometry(QRect(430, 177, 691, 31));
        parameter_k_field->setFont(font);
        parameter_k_field->setAlignment(Qt::AlignCenter);
        run_button = new QPushButton(frame_2);
        run_button->setObjectName(QString::fromUtf8("run_button"));
        run_button->setGeometry(QRect(890, 227, 231, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        run_button->setFont(font1);
        run_button->setAutoDefault(false);
        description_input_file_path = new QTextBrowser(frame_2);
        description_input_file_path->setObjectName(QString::fromUtf8("description_input_file_path"));
        description_input_file_path->setEnabled(false);
        description_input_file_path->setGeometry(QRect(40, 27, 341, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_input_file_path->setPalette(palette7);
        description_input_file_path->setFont(font);
        description_input_file_path->setFrameShape(QFrame::Box);
        input_file_check = new QLabel(frame_2);
        input_file_check->setObjectName(QString::fromUtf8("input_file_check"));
        input_file_check->setGeometry(QRect(1150, 20, 41, 41));
        input_file_check->setPixmap(QPixmap(QString::fromUtf8(":/tick/Resources/tick.jpg")));
        input_file_check->setScaledContents(true);
        output_file_check = new QLabel(frame_2);
        output_file_check->setObjectName(QString::fromUtf8("output_file_check"));
        output_file_check->setGeometry(QRect(1150, 70, 41, 41));
        output_file_check->setPixmap(QPixmap(QString::fromUtf8(":/tick/Resources/tick.jpg")));
        output_file_check->setScaledContents(true);
        parameter_n_check = new QLabel(frame_2);
        parameter_n_check->setObjectName(QString::fromUtf8("parameter_n_check"));
        parameter_n_check->setGeometry(QRect(1150, 120, 41, 41));
        parameter_n_check->setPixmap(QPixmap(QString::fromUtf8(":/tick/Resources/tick.jpg")));
        parameter_n_check->setScaledContents(true);
        parameter_k_check = new QLabel(frame_2);
        parameter_k_check->setObjectName(QString::fromUtf8("parameter_k_check"));
        parameter_k_check->setGeometry(QRect(1150, 170, 41, 41));
        parameter_k_check->setPixmap(QPixmap(QString::fromUtf8(":/tick/Resources/tick.jpg")));
        parameter_k_check->setScaledContents(true);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(310, 590, 1231, 351));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setLineWidth(1);
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(60, 230, 1111, 51));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        description_test = new QTextBrowser(frame_6);
        description_test->setObjectName(QString::fromUtf8("description_test"));
        description_test->setEnabled(false);
        description_test->setGeometry(QRect(10, 10, 191, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_test->setPalette(palette8);
        description_test->setFont(font);
        description_test->setFrameShape(QFrame::Box);
        test_f_it = new QLineEdit(frame_6);
        test_f_it->setObjectName(QString::fromUtf8("test_f_it"));
        test_f_it->setGeometry(QRect(230, 10, 151, 31));
        test_f_it->setFont(font);
        test_f_it->setAlignment(Qt::AlignCenter);
        test_f_it->setReadOnly(true);
        test_f_m = new QLineEdit(frame_6);
        test_f_m->setObjectName(QString::fromUtf8("test_f_m"));
        test_f_m->setGeometry(QRect(390, 10, 141, 31));
        test_f_m->setFont(font);
        test_f_m->setAlignment(Qt::AlignCenter);
        test_f_m->setReadOnly(true);
        test_p_it = new QLineEdit(frame_6);
        test_p_it->setObjectName(QString::fromUtf8("test_p_it"));
        test_p_it->setGeometry(QRect(570, 10, 151, 31));
        test_p_it->setFont(font);
        test_p_it->setAlignment(Qt::AlignCenter);
        test_p_it->setReadOnly(true);
        test_p_m = new QLineEdit(frame_6);
        test_p_m->setObjectName(QString::fromUtf8("test_p_m"));
        test_p_m->setGeometry(QRect(730, 10, 141, 31));
        test_p_m->setFont(font);
        test_p_m->setAlignment(Qt::AlignCenter);
        test_p_m->setReadOnly(true);
        test_tot = new QLineEdit(frame_6);
        test_tot->setObjectName(QString::fromUtf8("test_tot"));
        test_tot->setGeometry(QRect(910, 10, 181, 31));
        test_tot->setFont(font);
        test_tot->setAlignment(Qt::AlignCenter);
        test_tot->setReadOnly(true);
        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(60, 70, 1111, 51));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Plain);
        frame_7->setLineWidth(1);
        description_output_files = new QTextBrowser(frame_7);
        description_output_files->setObjectName(QString::fromUtf8("description_output_files"));
        description_output_files->setEnabled(false);
        description_output_files->setGeometry(QRect(10, 10, 191, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_output_files->setPalette(palette9);
        description_output_files->setFont(font);
        description_output_files->setFrameShape(QFrame::Box);
        csv_name_wall = new QLineEdit(frame_7);
        csv_name_wall->setObjectName(QString::fromUtf8("csv_name_wall"));
        csv_name_wall->setGeometry(QRect(230, 10, 211, 31));
        csv_name_wall->setFont(font);
        csv_name_wall->setAlignment(Qt::AlignCenter);
        csv_name_wall->setReadOnly(true);
        csv_name_partial = new QLineEdit(frame_7);
        csv_name_partial->setObjectName(QString::fromUtf8("csv_name_partial"));
        csv_name_partial->setGeometry(QRect(450, 10, 211, 31));
        csv_name_partial->setFont(font);
        csv_name_partial->setAlignment(Qt::AlignCenter);
        csv_name_partial->setReadOnly(true);
        description_cpu = new QTextBrowser(frame_3);
        description_cpu->setObjectName(QString::fromUtf8("description_cpu"));
        description_cpu->setEnabled(false);
        description_cpu->setGeometry(QRect(510, 20, 211, 38));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_cpu->setPalette(palette10);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        description_cpu->setFont(font2);
        description_cpu->setFrameShape(QFrame::Box);
        description_wall = new QTextBrowser(frame_3);
        description_wall->setObjectName(QString::fromUtf8("description_wall"));
        description_wall->setEnabled(false);
        description_wall->setGeometry(QRect(290, 20, 211, 38));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_wall->setPalette(palette11);
        QFont font3;
        font3.setPointSize(10);
        description_wall->setFont(font3);
        description_wall->setFrameShape(QFrame::Box);
        description_partial = new QTextBrowser(frame_3);
        description_partial->setObjectName(QString::fromUtf8("description_partial"));
        description_partial->setEnabled(false);
        description_partial->setGeometry(QRect(630, 140, 301, 38));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_partial->setPalette(palette12);
        description_partial->setFont(font2);
        description_partial->setFrameShape(QFrame::Box);
        description_full = new QTextBrowser(frame_3);
        description_full->setObjectName(QString::fromUtf8("description_full"));
        description_full->setEnabled(false);
        description_full->setGeometry(QRect(290, 140, 301, 38));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_full->setPalette(palette13);
        description_full->setFont(font3);
        description_full->setFrameShape(QFrame::Box);
        description_full_it = new QTextBrowser(frame_3);
        description_full_it->setObjectName(QString::fromUtf8("description_full_it"));
        description_full_it->setEnabled(false);
        description_full_it->setGeometry(QRect(290, 180, 151, 38));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_full_it->setPalette(palette14);
        description_full_it->setFont(font3);
        description_full_it->setFrameShape(QFrame::Box);
        description_full_m = new QTextBrowser(frame_3);
        description_full_m->setObjectName(QString::fromUtf8("description_full_m"));
        description_full_m->setEnabled(false);
        description_full_m->setGeometry(QRect(450, 180, 141, 38));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_full_m->setPalette(palette15);
        description_full_m->setFont(font3);
        description_full_m->setFrameShape(QFrame::Box);
        description_partial_it = new QTextBrowser(frame_3);
        description_partial_it->setObjectName(QString::fromUtf8("description_partial_it"));
        description_partial_it->setEnabled(false);
        description_partial_it->setGeometry(QRect(630, 180, 151, 38));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_partial_it->setPalette(palette16);
        description_partial_it->setFont(font3);
        description_partial_it->setFrameShape(QFrame::Box);
        description_partial_m = new QTextBrowser(frame_3);
        description_partial_m->setObjectName(QString::fromUtf8("description_partial_m"));
        description_partial_m->setEnabled(false);
        description_partial_m->setGeometry(QRect(790, 180, 141, 38));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_partial_m->setPalette(palette17);
        description_partial_m->setFont(font3);
        description_partial_m->setFrameShape(QFrame::Box);
        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(60, 310, 1111, 23));
        progressBar->setValue(0);
        progressBar->setInvertedAppearance(false);
        csv_name_p_changes = new QLineEdit(frame_3);
        csv_name_p_changes->setObjectName(QString::fromUtf8("csv_name_p_changes"));
        csv_name_p_changes->setGeometry(QRect(730, 80, 211, 31));
        csv_name_p_changes->setFont(font);
        csv_name_p_changes->setAlignment(Qt::AlignCenter);
        csv_name_p_changes->setReadOnly(true);
        description_p_changes = new QTextBrowser(frame_3);
        description_p_changes->setObjectName(QString::fromUtf8("description_p_changes"));
        description_p_changes->setEnabled(false);
        description_p_changes->setGeometry(QRect(730, 20, 211, 38));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_p_changes->setPalette(palette18);
        description_p_changes->setFont(font2);
        description_p_changes->setFrameShape(QFrame::Box);
        description_r_selected = new QTextBrowser(frame_3);
        description_r_selected->setObjectName(QString::fromUtf8("description_r_selected"));
        description_r_selected->setEnabled(false);
        description_r_selected->setGeometry(QRect(950, 20, 211, 38));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_r_selected->setPalette(palette19);
        description_r_selected->setFont(font2);
        description_r_selected->setFrameShape(QFrame::Box);
        csv_name_r_selected = new QLineEdit(frame_3);
        csv_name_r_selected->setObjectName(QString::fromUtf8("csv_name_r_selected"));
        csv_name_r_selected->setGeometry(QRect(950, 80, 211, 31));
        csv_name_r_selected->setFont(font);
        csv_name_r_selected->setAlignment(Qt::AlignCenter);
        csv_name_r_selected->setReadOnly(true);
        description_total_test = new QTextBrowser(frame_3);
        description_total_test->setObjectName(QString::fromUtf8("description_total_test"));
        description_total_test->setEnabled(false);
        description_total_test->setGeometry(QRect(970, 160, 181, 38));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        description_total_test->setPalette(palette20);
        description_total_test->setFont(font2);
        description_total_test->setFrameShape(QFrame::Box);
        title_input = new QTextBrowser(centralwidget);
        title_input->setObjectName(QString::fromUtf8("title_input"));
        title_input->setEnabled(false);
        title_input->setGeometry(QRect(30, 280, 41, 291));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush10(QColor(61, 61, 61, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(91, 91, 91, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(76, 76, 76, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(30, 30, 30, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(41, 41, 41, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        title_input->setPalette(palette21);
        title_input->setMouseTracking(true);
        title_input->setFrameShape(QFrame::NoFrame);
        title_input->setLineWrapMode(QTextEdit::NoWrap);
        title_output = new QTextBrowser(centralwidget);
        title_output->setObjectName(QString::fromUtf8("title_output"));
        title_output->setEnabled(false);
        title_output->setGeometry(QRect(30, 590, 41, 351));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        title_output->setPalette(palette22);
        title_output->setMouseTracking(true);
        title_output->setFrameShape(QFrame::NoFrame);
        title_output->setLineWrapMode(QTextEdit::NoWrap);
        title_info = new QTextBrowser(centralwidget);
        title_info->setObjectName(QString::fromUtf8("title_info"));
        title_info->setEnabled(false);
        title_info->setGeometry(QRect(30, 80, 41, 181));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        title_info->setPalette(palette23);
        title_info->setMouseTracking(true);
        title_info->setFrameShape(QFrame::NoFrame);
        title_info->setLineWrapMode(QTextEdit::NoWrap);
        label_info = new QLabel(centralwidget);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setGeometry(QRect(70, 80, 241, 181));
        label_info->setFrameShape(QFrame::Box);
        label_info->setPixmap(QPixmap(QString::fromUtf8(":/info/Resources/info.png")));
        label_info->setScaledContents(true);
        label_input = new QLabel(centralwidget);
        label_input->setObjectName(QString::fromUtf8("label_input"));
        label_input->setGeometry(QRect(70, 280, 241, 291));
        label_input->setFrameShape(QFrame::Box);
        label_input->setPixmap(QPixmap(QString::fromUtf8(":/input/Resources/input.png")));
        label_input->setScaledContents(true);
        label_output = new QLabel(centralwidget);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setGeometry(QRect(70, 590, 241, 351));
        label_output->setFrameShape(QFrame::Box);
        label_output->setPixmap(QPixmap(QString::fromUtf8(":/output/Resources/output.png")));
        label_output->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 10, 771, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Algorithm", nullptr));
        output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - file with </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">n</span><span style=\" font-size:9pt;\">  reads of </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">D  </span><span style=\" font-size:9pt;\">chosen</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">   at random uniformly with replacement</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0"
                        "px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - log file with execution times</span></p></body></html>", nullptr));
        version->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt;\">  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">Full :  </span><span style=\" font-size:9pt;\">in the output dataset are written all four lines</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - </span><span "
                        "style=\" font-size:9pt; font-weight:600; font-style:italic;\">Partial :  </span><span style=\" font-size:9pt;\">in the output dataset is written only significant line</span></p></body></html>", nullptr));
        description_input->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Input</span></p></body></html>", nullptr));
        description_output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Output</span></p></body></html>", nullptr));
        description_version->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Version</span></p></body></html>", nullptr));
        input->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - dataset </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">D  </span><span style=\" font-size:9pt;\">with </span><span style=\" font-size:9pt; font-weight:600;\">|</span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">D </span><span style=\" font-size:9pt; font-weight:600;\">| </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">= m  </span><span style=\" font-size:9pt;\">reads of 4 lines (only 3\302\260 is significant)</span></p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - sample size </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">n</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\"> - parameter </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">k</span><span style=\" font-size:9pt;\">  </span><span style=\" font-family:'Crimson Text','Garamond','Times New Roman','serif'; font-size:9pt; color:#3e3f3e; background-color:#ffffff;\">\342\210\210 </span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">[1, m]</span></p></body></html>", nullptr));
        input_file_field->setText(QString());
        output_file_field->setText(QString());
        description_output_directory->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Insert the desired output directory:</span></p></body></html>", nullptr));
        description_n->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Insert parameters n (separated by semicolon):</span></p></body></html>", nullptr));
        parameter_n_field->setText(QString());
        description_k->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Insert  parameters k (separated by semicolon):</span></p></body></html>", nullptr));
        parameter_k_field->setText(QString());
        run_button->setText(QCoreApplication::translate("MainWindow", "Run algorithm", nullptr));
        description_input_file_path->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Insert the desired input-file path:</span></p></body></html>", nullptr));
        input_file_check->setText(QString());
        output_file_check->setText(QString());
        parameter_n_check->setText(QString());
        parameter_k_check->setText(QString());
        description_test->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Tests completed:</span></p></body></html>", nullptr));
        test_f_it->setText(QString());
        test_f_m->setText(QString());
        test_p_it->setText(QString());
        test_p_m->setText(QString());
        test_tot->setText(QString());
        description_output_files->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Output files:</span></p></body></html>", nullptr));
        csv_name_wall->setText(QString());
        csv_name_partial->setText(QString());
        description_cpu->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">CPU time:</span></p></body></html>", nullptr));
        description_wall->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Wall time:</span></p></body></html>", nullptr));
        description_partial->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Partial version:</span></p></body></html>", nullptr));
        description_full->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Full version:</span></p></body></html>", nullptr));
        description_full_it->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Iterate:</span></p></body></html>", nullptr));
        description_full_m->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Massive:</span></p></body></html>", nullptr));
        description_partial_it->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Iterate:</span></p></body></html>", nullptr));
        description_partial_m->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Massive:</span></p></body></html>", nullptr));
        csv_name_p_changes->setText(QString());
        description_p_changes->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Parameters changes:</span></p></body></html>", nullptr));
        description_r_selected->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Input records selected:</span></p></body></html>", nullptr));
        csv_name_r_selected->setText(QString());
        description_total_test->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Total tests:</span></p></body></html>", nullptr));
        title_input->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">I</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">N</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">P</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">U</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">T</span></p></body></html>", nullptr));
        title_output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">O</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">U</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff"
                        ";\">T</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">P</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">U</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">T</span></p></body></html>", nullptr));
        title_info->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">I</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">N</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">F</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">O</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600; color:#ffffff;\"><br /></p></body></html>", nullptr));
        label_info->setText(QString());
        label_input->setText(QString());
        label_output->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Uniform sampling with k space", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
