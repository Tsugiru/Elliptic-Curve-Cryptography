#include <inverse_mod.h>
#include <assert.h>

int inverse_mod(int k, int p) {

	if(k == 0){
		throw "Division by zero error";
	}

	if(k < 0){
		return p - inverse_mod(-k, p);
	}

	int s = 0;
	int prev_s = 1;
	int t = 1;
	int prev_t = 0;
	int r = p;
	int prev_r = k;
	
	int quotient = 0;
	int temp = 0;

	while(r != 0){
	
		quotient = prev_r / r;
		
		temp = prev_r;
		prev_r = r;
		r = temp - quotient*r;
		
		temp = prev_s;
		prev_s = s;
		s = temp - quotient*s;
		
		temp = prev_t;
		prev_t = t;
		t = temp - quotient*t;

	}

	int gcd = prev_r;
	int x = prev_s;
	int y = prev_t;


	assert( gcd == 1 );
	assert( (k * x) % p == 1 );

	return x%p;
}
