#include <QApplication>
#include <QPushButton>
#include "main_widget.h"
#include <Curves.h>
#include <KeyGen.h>

int main(int argc, char **argv)
{
    cpp_int x = secp192k1.a;
    std::cout << x << std::endl;

	EccCalculator* eccCalculator = new EccCalculator(secp192k1);
	KeyGen* keyGen = new KeyGen(eccCalculator);
	keyGen->GenerateKeyPair();	

	Point pubKey = keyGen->GetPublicKey();
	cpp_int privKey = keyGen->GetPrivateKey();
	std::cout << "Private key: " << privKey << std::endl;
	std::cout << "Public key: " << pubKey << std::endl;

    QApplication app (argc, argv);
    MainWidget *myWidget = new MainWidget();
    myWidget->show();
    return app.exec();
}
