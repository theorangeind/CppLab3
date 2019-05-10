#include "pch.h"
#include <iostream>

using namespace std;

//variant 8

//mid difficulty level
/*
int main()
{
	const int length = 30;
	char c[length] = "*He***l*l***o wor**l*d**!";
	char s[2*length];
	int count = 0;

	cout << c << "\n";

	for (int i = 0; i < sizeof(c) / sizeof(char); i++)
	{
		if (c[i] != '*')
		{
			s[i + count] = c[i];
			s[i + count + 1] = c[i];
			count++;
		}
		else
		{
			count--;
		}
	}

	cout << count << "\n";
	cout << s;

	return 0;
}
*/


//high difficulty level
int main()
{
	int wordMaxLength = 10;
	char c[wordMaxLength] /*= "QWERTYUIOP"*/;
	char s[wordMaxLength] /*= "PIQEOUWRYT"*/;
	
	cin.getline(c, wordMaxLength);
	cin.getline(s, wordMaxLength);

	if (sizeof(c) != sizeof(s))
	{
		cout << "NOT ANAGRAMS";
		return 0;
	}
	else
	{
		char t;

		for (int i = 0; i < sizeof(c) / sizeof(char); i++)
		{
			for (int j = i + 1; j < sizeof(c) / sizeof(char); j++)
			{
				if (c[i] != s[i])
				{
					t = s[i];
					s[i] = s[j];
					s[j] = t;
				}
			}
		}
	}

	cout << c << "\n" << s << "\n";

	if (strcmp(c, s) == 0) cout << "ANAGRAMS";
	else cout << "NOT ANAGRAMS";

	return 0;
}
