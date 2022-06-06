// порахувати кількість слів у рядку
#include <iostream>

using namespace std;

int main()
{
	char sentence[80];
	int words = 0;
	cout << "Enter anything -> ";
	cin.getline(sentence, 80);
	int len = strlen(sentence);
	sentence[len] = ' ';
	sentence[len + 1] = '\0';
	len++;
	for (int i = len; i > 0; i--)
	{
		if (sentence[i] == ' ' && sentence[i-1] != ' ')
			words++;
	}
	cout << "Num of words -> " << words;
}