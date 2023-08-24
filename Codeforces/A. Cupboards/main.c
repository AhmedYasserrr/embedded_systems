/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 21 / 8 / 2023
************************************************************/
#include <stdio.h>


int min(int num1, int num2)
{
    // using the conditional operator to calcualte the min
    return (num1 > num2) ? num2 : num1;
}

int main()
{
	int n;
	int sf = 0, ss = 0;

	scanf("%d", &n);
	int t = n;
	while(t--){
		int f, s;
		scanf("%d %d", &f, &s);
		sf += f;
		ss += s;
	}
	printf("%d", (min(sf, (n - sf)) +  min(ss, (n - ss))));

    return 0;
}

