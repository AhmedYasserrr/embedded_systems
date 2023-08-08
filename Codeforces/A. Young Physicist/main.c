/************************************************************
* Filename: Young Physicist
* Author: Ahmed Yasser
* Date: 8 / 8 / 2023
************************************************************/
#include <stdio.h>
int main()
{
	int sx =0; int sy = 0; int sz = 0; int n;
	scanf("%d", &n);
	while(n--){
	    int x; int y; int z;
	    scanf("%d %d %d", &x, &y, &z);
	    sx+=x; sy+=y; sz+=z;
	}

	if(sx || sy || sz) printf("NO\n");
	else printf("YES\n");
    return 0;
}

