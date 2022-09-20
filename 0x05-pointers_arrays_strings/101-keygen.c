#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - generates random valid passwords for the program 
 * password for the program 101_crackme
 * return: always 0
 */

int main(void)
{
	char passwrd[84];
	int index = 0, sum = 0, diff_hlfa, diff_hlfb,diff_hlfc;

	srand(time(0));
	while (sum < 2772)
	{
		passwrd[index] = 33 + rand() % 94;
		sum += passwrd[index++];
	}
	passwrd[index] = '\0';
	if (sum != 2772)
	{
		diff_hlfa = (sum - 2772) / 2;
		diff_hlfb = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_hlfa++;
		for (index = 0; passwrd[index]; index++)
		{
			if (passwrd[index] >= (33 + diff_hlfa))
			{
				passwrd[index] -= diff_hlfa;
				break;
			}
		}
		for (index = 0; passwrd[index]; index++)
		{
			if (passwrd[index] >= (33 + diff_hlfb))
			{
				passwrd[index] -= diff_hlfb;
				break;
			}
		}
	}
	printf("%s", passwrd);
	return (0);
}
