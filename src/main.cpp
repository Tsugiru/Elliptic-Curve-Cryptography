#include <iostream>
#include <Curves.h>
#include <KeyGen.h>

int main() {
<<<<<<< HEAD
<<<<<<< HEAD
    std::cout << a << std::endl;
    return 0;
=======
	
	EllipticCurve c = StandardEllipticCurves.find("secp256k1")->second;
	
	std::cout << c.p << std::endl;
=======
	EccCalculator* eccCalculator = new EccCalculator(secp192k1);
	KeyGen* keyGen = new KeyGen(eccCalculator);
	keyGen->GenerateKeyPair();	

	Point pubKey = keyGen->GetPublicKey();
	cpp_int privKey = keyGen->GetPrivateKey();
	std::cout << "Private key: " << privKey << std::endl;
	std::cout << "Public key: " << pubKey << std::endl;
>>>>>>> add public and private key generation
	return 0;
>>>>>>> - Added EllipticCurve.h, not compiling.
}
