#include "mainwindow.h"

#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    m.setFixedSize(m.width(), m.height());

    QRect rec = QGuiApplication::screenAt(m.pos())->geometry();
    QSize size = m.size();
    QPoint topLeft = QPoint((rec.width() / 2) - (size.width() / 2), (rec.height() / 2) - (size.height() / 2));
    m.setGeometry(QRect(topLeft, size));

    m.showNormal();
    a.exec();
    return 0;
}
