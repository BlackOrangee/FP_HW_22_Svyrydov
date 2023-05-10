// Task 2.Given a letter string that contains the sequence of characters s0, ...,sn, ... 
// If the word is written after a period, then replace the first letter in this word with the appropriate uppercase letter.
//

#include <iostream>
using namespace std;

void SentenceCorrector(char* str);//Replace the first letter in this word with the appropriate uppercase letter.

int main()
{
	char str[50];

	fgets(str, sizeof(str), stdin);

	SentenceCorrector(str);

	cout << str;
}

void SentenceCorrector(char* str)//Replace the first letter in this word with the appropriate uppercase letter.
{
	for (int i = 0; i < strlen(str) + 1; i++)
	{
		// 97 = 'a' code // 122 = 'z' code
		
		if (i == 0 && (str[0] >= 97 && str[0] <= 122))
		{
			str[0] -= 32;
		}
		if (str[i] == '.' && str[i + 1] == ' ' && (str[i + 2] >= 97 && str[i + 2] <= 122))
		{
			str[i + 2] -= 32;
		}
	}
}