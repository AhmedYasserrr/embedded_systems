/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 20 / 8 / 2023
************************************************************/
#include <stdio.h>

int main()
{
	int t; 
	scanf("%d", &t);
	while(t--){
			int n; int i;
	scanf("%d", &n);
	if (n&1){
		if(n == 3) {
			printf("-1");
			}
		else {
			int cnt = n/2;
			while(cnt--){
				printf("%d ", n);
				n--;}

			for(i = 1; i <= n; i++){
			printf("%d ", i);}
		}
	}
	else{
		for(i = n; i > 0; i--){
			printf("%d ", i);
		}
	}
	printf("\n");
	}

    return 0;
}

