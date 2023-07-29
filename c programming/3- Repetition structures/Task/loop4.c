/************************************************************
* Filename: calculator
* Author: Ahmed Yasser
* Date: 29 / 7 / 2023
************************************************************/
#include <stdio.h>


int main()
{
    /*initialize integer for the number of lines to print*/
    int n;

    /*ask the user for the number of lines to print*/
    scanf(" %d", &n);

    /*char to fill the line with*/
    char c = '*';

    /*two loops one to print the numberof chars in row and one to print n rows*/
    int i = 0;
    for(i = 1; i <= n; i++){
        int j = 0;
        for(j = 0; j < (n - i); j++) printf(" ");
        int k =0;
        for(k = 0; k < (i+1) * 2; k++) printf("%c",c);
        printf("\n");
    }
    
    return 0;
}