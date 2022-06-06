// назву дня тижня за номером
#include <iostream>

using namespace std;

int main()
{
	int n;
	do
	{
		cout << "Enter number -> ";
		cin >> n;
		switch (n)
		{
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default: n = 0;
		}
	} while (n > 0 && n < 8);

}