#include <stdio.h>
int add(int x, int y){
    return x+y;
}
int (*fun)(int, int) = add;
int main(){
    printf("%d", fun(1, 2));
    return 0;
}