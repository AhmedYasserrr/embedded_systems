#include <stdio.h>


int main(void){
    int op;
    int n1;int n2;
    printf("Welcome in calculator app\n");
    printf("Enter: type of operation  num1 num2\n");
    printf("1 for +, 2 for -, 3 for *, 4 for / \n");
    scanf("%d %d %d",&op, &n1, &n2);
    if(op == 1){printf("%d", n1+n2);}
    else if(op == 2){printf("%d", n1-n2);}
    else if(op == 3){printf("%d", n1*n2);}
    else if(op == 4){
        if(n2 == 0) printf("this is not applicable");
        else printf("%f", (double)(n1) / n2);
        }
    else {}
    return 0;
}