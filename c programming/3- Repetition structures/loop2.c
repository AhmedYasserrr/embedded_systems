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

    /*two loops one to print the row and one to repeat it*/
    for(int i =0; i < n; i++){
        for(int j = 0; j <n; j++) printf("%c",c);
        printf("\n");
    }
    
    return 0;
}