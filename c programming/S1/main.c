#include <stdio.h>

int set(int n, int pos){return (n | (1<<pos));}
int toggle(int n, int pos){return (n ^ (1<<pos));}
int clear(int n, int pos){return (n & ~(1<<pos));}

int main(void){
    int n; int pos;
    scanf("%d %d", &n, &pos);
    printf("set bit %d to 0: %d\n", pos, clear(n, pos));
    printf("set bit %d to 0: %d\n", pos, clear(n, pos));
    printf("set bit %d to 1: %d\n", pos, set(n, pos));
    printf("toggle bit %d: %d\n", pos, toggle(n, pos));
    
    return 0;
}