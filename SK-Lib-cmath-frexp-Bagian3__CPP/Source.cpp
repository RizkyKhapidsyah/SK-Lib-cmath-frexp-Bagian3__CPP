// CPP implementation of the
// above function
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks	
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

// Driver program
int main() {
	double significand;
	int exponent, x = 5;
	significand = frexp(x, &exponent);

	cout << x << " = " << significand << " * 2^" << exponent << endl;

	_getch();
	return 0;
}
