// мінімальний та максимальний і сума парних
#include <iostream>

using namespace std;

int main()
{
	const int size = 20;
	int arr[size];

	srand((unsigned)time(NULL));

	cout << "Array:" << endl;

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	int max = arr[0]; int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	int sum = 0;

	for (int i = 0; i < size; i += 2)
		sum += arr[i];

	cout << endl << "Max -> " << max << " Min -> " << min << " Sum -> " << sum;
}