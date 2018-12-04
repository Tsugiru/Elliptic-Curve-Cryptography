#include "main_widget.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    encryptButton = new QPushButton("Encrypt");
    decryptButton = new QPushButton("Decrypt");
    generateKeyButton = new QPushButton("Generate Key");
    encryptTextBox = new QLineEdit();
    decryptTextBox = new QLineEdit();
    outputTextBox = new QLineEdit();
    gridLayout = new QGridLayout();
    outputLabel = new QLabel("Output:");
    setGridLayout();
    show();
}

void MainWidget::setGridLayout()
{
    gridLayout->addWidget(generateKeyButton, 0, 0);
    gridLayout->addWidget(encryptTextBox, 1, 0, 1, 2);
    gridLayout->addWidget(encryptButton, 2, 0);
    gridLayout->addWidget(decryptTextBox, 3, 0, 1, 2);
    gridLayout->addWidget(decryptButton, 4, 0);
    gridLayout->addWidget(outputLabel, 5, 0);
    gridLayout->addWidget(outputTextBox, 6, 0, 1, 2);
    setLayout(gridLayout);
}
