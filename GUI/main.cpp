#include <QApplication>
#include <QPushButton>
#include "main_widget.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    MainWidget *myWidget = new MainWidget();
    myWidget->show();
    return app.exec();
}
