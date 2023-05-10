// Task 1. Given a letter string that contains the sequence of characters s0, ..., sn, ... 
// Calculate the length of the longest word in this sequence. 
// A word is a group of symbols that are arranged consecutiveand distinct from spacesand punctuation marks.
//
 
#include <iostream>
using namespace std;

int GetLongestWordLength(char* str, int len, int len_2, int i);//Calculate the length of the longest word in this sequence. 

int main()
{
	char str[50];

	fgets(str, sizeof(str), stdin);

	cout << "The length of the longest word: " << GetLongestWordLength(str, 0, 0, 0);
}

int GetLongestWordLength(char* str, int len, int len_2, int i)//Calculate the length of the longest word in this sequence. 
{
	if (i == strlen(str))
	{
		return len_2;
	}
	else if (i != strlen(str))
	{
		if (str[i] == 32)//Space code = 32
		{
			if (len > len_2)
			{
				len_2 = len;
				len = -1;
			}
			else
			{
				len = -1;
			}
		}
		len++;
	}
	GetLongestWordLength(str, len, len_2, ++i);
}
