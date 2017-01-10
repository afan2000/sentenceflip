#include <iostream>
using namespace std;

int main()
{
	int i, count = 1;
	char a[100], endChar, p[10];
	cout << "enter your sentence: ";
	int len0 = sizeof(a) / sizeof(a[0]);
	int len1 = sizeof(p) / sizeof(p[0]);
	for (i = 0; i < len0 && (a[i] = getchar()) && a[i] != '\n'; i++)
	{
		p[0] = 0;
		if (a[i] == ' ')
		{
			p[count] = i + 1;
			count++;
		}
	}
	endChar = a[i];
	for (int i = count-1; i >= 0 ; i--)
	{
		/*
		
	    idx : p[i]
		a[ idx ] .. a [idx+1 ]... until not alphabet
		*/
		for (int idx = p[i]; a[idx] != ' ' && a[idx] != '!' && a[idx] != '.' && a[idx] != '?' && a[idx] != -52; idx++)
		{
			cout << a[idx] ;

		}
		cout << ' ';
	}
	cout << endChar;
}
	/*if (a[i] == '\n')
	{
		endChar = a[i - 1];
	}
	for (int i = len; i != 0; i--)
	{
		if (a[i] == ' ')
		{
			for (int o = i+1; a[o] != ' ' && a[o] != '.' && a[o] != '?' && a[o] != '!'; o++)
			{
				cout << a[o];
			}
			cout << ' ';
		}
		else if (i == 1)
		{
			for (int o = 0; a[o] != ' ' && a[o] != '.' && a[o] != '?' && a[o] != '!'; o++)
			{
				cout << a[o];
			}
		}
	}
	cout << endChar << '\n';
}*/
	
