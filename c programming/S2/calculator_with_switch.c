/************************************************************
* Filename: calculator_with_switch
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

while(1){
    switch(op){
        case 1:
            printf("%f", n1+n2); return 0;
            break;
        case 2:
            printf("%f", n1-n2); return 0;
            break;
        case 3:
            printf("%f", n1*n2); return 0;
            break;
        case 4:
                if(n2 == 0){ printf("this is not applicable\n"); 
                op = 5;}
                else {printf("%f", (double)(n1) / n2); return 0;}
            break; 
        case 5:
                printf("Enter: type of operation  num1 num2\n");
                printf("1 for +, 2 for -, 3 for *, 4 for / \n");
                scanf(" %d %f %f",&op, &n1, &n2);
                break;
        default:
            printf("this is not an operation\n");
            op = 5;
            break;
    }
}
    return 0;
}