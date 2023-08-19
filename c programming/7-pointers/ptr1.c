#include <stdio.h>

int main(){
    int x = 5;
    int y = 10;
    int *ptr = &y;
    
    printf("x: %d\n", x);
    printf("&x: %d\n", &x);
    printf("*ptr: %d\n", *ptr);
    printf("ptr: %d\n", ptr);
    printf("&ptr: %d\n", &ptr);
    ptr += 1;
    *ptr = 29;
    printf("x: %d\n", x);
    printf("&x: %d\n", &x);
    printf("*ptr: %d\n", *ptr);
    printf("ptr: %d\n", ptr);
    printf("&ptr: %d\n", &ptr);
}