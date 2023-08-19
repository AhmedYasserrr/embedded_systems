/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 17 / 8 / 2023
************************************************************/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i; n--;
	int min = 101; int mini;
	int max = 0; int maxi;
	for(i  = 0; i <= n; i++){
		int x; scanf("%d", &x);
		if(x <= min){
			min = x;
			mini = i;
		}
		if(x > max){
			max = x;
			maxi = i;
		}
	}
	int ans;
	ans = maxi + (n - mini);
	if(maxi > mini){
		ans--;
	}
	printf("%d", ans);
    return 0;
}

