// зчитування з файлу в массив
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int size;
	char filename[22];
	cout << "Input a file name, please\n";
	cin.getline(filename, 22);
    ifstream fin(filename);
	if (!fin)
	{
		cout << "ERROR" << endl;
		return 0;
	}
	fin >> size;
    int* list = new int[size];

	for (int i = 0; i < size; i++)
	{
		fin >> list[i];
	}

	cout << endl << "Array:" << endl;

	for (int i = 0; i < size; i++)
		cout << list[i] << " ";

	fin.close();
}

