/************************************************************
* Filename: main.c
* Author: Ahmed Yasser
* Date: 24 / 8 / 2023
************************************************************/
#include <stdio.h>
int main()
{
	int n; 
	int i; 
	int mx = 0;
	int mn = 10001; 
	int cnt = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		if(x > mx){
			mx = x;
			if(i) cnt++;
		}
		if(x < mn){
			mn = x;
			if(i) cnt++;
		}
	}
	printf("%d", cnt);
    return 0;
}

