/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 16 / 8 / 2023
************************************************************/
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	if (n&1){
		printf("-1");
	}
	else{
		int i;
		for(i = 1; i <= n/2; i++){
			printf("%d ",i * 2);
			printf("%d ",(i * 2 - 1));
		}
	}
	

    return 0;
}

