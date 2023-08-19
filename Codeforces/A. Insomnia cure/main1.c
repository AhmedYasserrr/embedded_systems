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
	for(i = 1; i <= n; i++){
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % d == 0){
			ans++;
		}
	}
	printf("%d", ans);

    return 0;
}

