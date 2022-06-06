// переклад в різні системи числення
#include <iostream>

using namespace std;

void decimalToAny(int N, int system)
{
	if (N == 0)
		return;
	int x = N % system;
	N /= system;
	decimalToAny(N, system);
	if (x >= 10)
		cout << (char)(x + 55);
	else
		cout << x;
}

int main()
{
	int number, n;
	do {
		cout << endl <<"Menu:\n"
			<< "1 - To binary\n"
			<< "2 - To ternary\n"
			<< "3 - To octal\n"
			<< "4 - To hexadecimal\n"
			<< "0 - Quit\n\n=>";
		cin >> n;
		cin.ignore();
		switch (n)
		{
		case 1:
			cout << "Input a number, please -> ";
			cin >> number;
			decimalToAny(number, 2);
			break;
		case 2:
			cout << "Input a number, please -> ";
			cin >> number;
			decimalToAny(number, 3);
			break;
		case 3:
			cout << "Input a number, please -> ";
			cin >> number;
			decimalToAny(number, 8);
			break;
		case 4:
			cout << "Input a number, please -> ";
			cin >> number;
			decimalToAny(number, 16);
			break;
		default: n = 0;
		}
	} while (n);
}

