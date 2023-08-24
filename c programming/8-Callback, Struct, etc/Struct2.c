#include <stdio.h>
#include <string.h>
// #pragma pack(push , 8) 

struct S{
char c;
int n1;
char c2;
}__attribute__((packed, aligned(1)));
// 1 4 1
int main(){

struct S st;
printf("size: %d\n", sizeof(st));

}