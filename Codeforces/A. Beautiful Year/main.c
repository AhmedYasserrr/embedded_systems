/************************************************************
* Filename: Young Physicist
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	n++;
	int i;
	for(i =n; i <= 9999; i++){
	int x = i;
	int s1 = x%10; x/= 10;
	int s2 = x%10; x/= 10;
	int s3 = x%10; x/= 10;
	int s4 = x%10; x/= 10;   
	if(s1 != s2 && s1 != s3 && s1 != s4 && s2 != s3 && s2 != s4 && s3 != s4) break;
	}
	printf("%d", i);
    return 0;
}

