/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	char s1[101]; char s2[101]; int i;

	scanf("%s %s", &s1, &s2);
	i = 0;

	while(s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		i++;
	}

    return 0;
}

