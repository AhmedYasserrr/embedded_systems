/************************************************************
* Filename: calculator
* Author: Ahmed Yasser
* Date: 28 / 7 / 2023
************************************************************/
#include <stdio.h>


int main(void){
    char op;
    float n1; float n2;
    printf("Welcome in calculator app\n");
    printf("Enter: type of operation  num1 num2\n");
    printf("1 for +, 2 for -, 3 for *, 4 for / \n");
    scanf(" %d %f %f",&op, &n1, &n2);
    if(op == 1){printf("%f", n1+n2);}
    else if(op == 2){printf("%f", n1-n2);}
    else if(op == 3){printf("%f", n1*n2);}
    else if(op == 4){
        if(n2 == 0) printf("this is not applicable");
        else printf("%f", (double)(n1) / n2);
        }
    else {}
    return 0;
}