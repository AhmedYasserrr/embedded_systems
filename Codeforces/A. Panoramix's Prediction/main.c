/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	int n; int m; int i; int j; int ok;

	scanf("%d %d", &n, &m);
	for(i = n + 1; i <= m; i++){
		ok = 0;
		for(j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				ok = 1;
				break;
			}
		}
		if(!ok) break;
	}

	if (i == m)
		printf("YES");
	else 
		printf("NO");

    return 0;
}

