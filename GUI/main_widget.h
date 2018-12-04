#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QObject>
#include <QWidget>
#include <QtWidgets>

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = nullptr);


private:
    QGridLayout *gridLayout;
    QPushButton *encryptButton, *decryptButton, *generateKeyButton;
    QLineEdit *encryptTextBox, *decryptTextBox, *outputTextBox;
    QLabel *outputLabel;
    void setGridLayout();

signals:

public slots:
};

#endif // MAIN_WIDGET_H
