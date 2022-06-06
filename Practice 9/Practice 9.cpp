// перетворити рядок в число і назад
#include <iostream>

using namespace std;


int main()
{
	char char_nums[80];
	int words = 0;
	cout << "Enter anything -> ";
	cin.getline(char_nums, 80);
	int len = strlen(char_nums);
	char_nums[len] = ' ';
	char_nums[++len] = '\0';


	int int_nums[20];

	char temp_char[10];

	int j = 0;


	for (int i = 0; i < len; i++)
	{
		if (char_nums[i] != ' ')
		{
			temp_char[j] = char_nums[i];
			j++;
		}
		else
		{
			if (atoi(temp_char) != 0)
			{
				int_nums[words] = atoi(temp_char);
				words++;
			}
			for (int k = 0; k < j; k++)
				temp_char[k] = ' ';

			j = 0;
		}
	}


	for (int i = 0; i < words; i++)
	{
		cout << int_nums[i] << ", ";
	}


}
