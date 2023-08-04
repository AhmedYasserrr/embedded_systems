/************************************************************
* Filename: Backtracking
* Author: Ahmed Yasser
* Date: 4 / 8 / 2023
************************************************************/
#include <stdio.h>
void fun(int n);
int main()
{
    fun(3);
    return 0;
}

void fun(int n){
    if(n > 0){
        fun(--n);
        printf("%d", n);
        fun(--n);
    }
}