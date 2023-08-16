/************************************************************
* Filename: main
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
int main()
{
	char s[20];
	scanf("%s", &s);
	int i = 0; int ok = 0;
	while(s[i] != '\0'){
		// printf("%d  %c  ", ok, s[i]);
		if(s[i] == '7'|| s[i] == '4'){ 
			ok++;
		}
		i++;
	}
	if(ok == 7 || ok == 4) printf("YES");
	else printf("NO");

    return 0;
}

