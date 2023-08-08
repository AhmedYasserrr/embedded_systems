/************************************************************
* Filename: factorial
* Author: Ahmed Yasser
* Date: 29 / 7 / 2023
************************************************************/
#include <stdio.h>
long long int fact(long long int n){
		if(n == 1 || n==0) return 1;
		else return fact(n-1) * n;
}

int main()
{
	long long int n = 5;
    printf("%lld", fact(n));
    return 0;
}

