#include <iostream>
#include "main.h"

#include "EllipticCurve.h"

int main() {
	
	EllipticCurve c = StandardEllipticCurves.find("secp256k1")->second;
	
	std::cout << c.p << std::endl;
	return 0;
}
