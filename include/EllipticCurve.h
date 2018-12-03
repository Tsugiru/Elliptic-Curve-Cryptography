#include <boost/multiprecision/cpp_int.hpp>
#include <string>
#include <map>
#include <utility>

using namespace boost::multiprecision;

class EllipticCurve {
	
public:
	int512_t p; // Finite field 
	int512_t a; // Elliptic Curve parameter 1
	int512_t b; // Elliptic Curve parameter 2

	std::pair<int512_t, int512_t> g; // Generator point

	int512_t n; //Subgroup order
	int512_t h; //Subgroup cofactor

	//Constructor
	EllipticCurve(int512_t p, int512_t a, int512_t b, std::pair<int512_t, int512_t, g, int512_t n, int512_t h){
		this->p = p;
		this->a = a;
		this->g = g;
		this->b = b;
		this->n = n;
		this->h = h;
	}

	// Copy Constructor
	EllipticCurve(const EllipticCurve &c){
		this->p = c.p;
		this->a = c.a;
		this->g = c.g;
		this->b = c.b;
		this->n = c.n;
		this->h = c.h;
	}
};



EllipticCurve t1 = EllipticCurve(
		0xfffffffffffffffffffffffffffffffffffffffffffffffffffffffefffffc2f,
		0,
		7,
		std::pair<int512_t, int512_t>(0x79be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798,
			0x483ada7726a3c4655da4fbfc0e1108a8fd17b448a68554199c47d08ffb10d4b8),
		0xfffffffffffffffffffffffffffffffebaaedce6af48a03bbfd25e8cd0364141,
		0x1
);


std::map<std::string, EllipticCurve> StandardEllipticCurves;
StandardEllipticCurves.insert(std::pair<std::string, EllipticCurve>("secp256k1", t1));
