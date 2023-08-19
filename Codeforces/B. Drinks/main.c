/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 18 / 8 / 2023
************************************************************/
#include <stdio.h>

int main()
{
	int n; int i; 
	double ans = 0; 

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		ans += x;
	}
	ans /= n;
	printf("%f", ans);
    return 0;
}

