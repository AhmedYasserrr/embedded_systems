#include <stdio.h>

int main(){
    int x = 5;
    int y = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;    
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("*ptr: %d\n", *ptr);
    printf("ptr: %d\n", ptr);
    printf("&ptr: %d\n", &ptr);
    printf("*ptr2: %d\n", *ptr2);
    printf("ptr2: %d\n", ptr2);
    *ptr = (int*) &y;
    **ptr2 = 18;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("*ptr: %d\n", *ptr);
    printf("ptr: %d\n", ptr);
    printf("&ptr: %d\n", &ptr);
    printf("*ptr2: %d\n", *ptr2);
    printf("ptr2: %d\n", ptr2);
}