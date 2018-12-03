#include <iostream>
#include "main.h"

#include "EllipticCurve.h"

int main() {
<<<<<<< HEAD
    std::cout << a << std::endl;
    return 0;
=======
	
	EllipticCurve c = StandardEllipticCurves.find("secp256k1")->second;
	
	std::cout << c.p << std::endl;
	return 0;
>>>>>>> - Added EllipticCurve.h, not compiling.
}
