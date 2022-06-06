// сортування
#include <iostream>

using namespace std;

void sort(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

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

	sort(arr, size);

	cout << endl << "Sorted:" << endl;

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

}
