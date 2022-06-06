// переклад десяткового дробу в звичайну
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	while (a % b != 0) {
		a = a % b;
		int t = a;
		a = b;
		b = t;
	}
	return b;
}


int main()
{
    double number;

	int denominator = 1;
	double numerator;

    cout << "Enter number -> ";
    cin >> number;

	int int_part = (int)number;

	numerator = number - int_part;

	if (numerator == 0.0)
	{
		cout << number << "/1";
		return 0;
	}
	
    while (numerator != (int)numerator)
    {
		numerator = stod(to_string(numerator));
		numerator *= 10;
        denominator *= 10;
    }

	int divisor = gcd(numerator, denominator);

    cout << int_part << " " << abs(numerator / divisor) << "/" << abs(denominator / divisor) << endl;
	
}
