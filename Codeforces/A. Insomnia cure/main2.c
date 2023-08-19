/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 19 / 8 / 2023
************************************************************/
#include <stdio.h>

int main()
{
	int k, l, m, d, n, i;
	int ans = 0;
	scanf(" %d %d %d %d %d", &k, &l, &m, &d, &n);
	ans += n/k + n/l + n/m + n/d;
	ans -= (n/(k*l) +  n/(k*m) +  n/(k*d) +  n/(l*m) + n/(l*d) + n/(m*d)); 
	ans += (n/(k*l*m) +  n/(k*l*d) +  n/(k*m*d) +  n/(l*m*d)); 
	ans -= n/(k*m*l*d);
	printf("%d", ans);

    return 0;
}

