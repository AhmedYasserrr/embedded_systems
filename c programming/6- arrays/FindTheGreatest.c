/************************************************************
* Filename: calculator
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
int FindTheGreatest(int a[]);

int main()
{
    int a[10] = {4,1,2,6,7,8,9,10,12,3};
    printf("%d", FindTheGreatest(a));
}

int FindTheGreatest(int a[]){
    int mx = 0;
   for(int i=0; i < 10; i++){
        if(a[i]> mx)
        {
            mx = a[i];
        }  
        else{}
   }
   return mx;
}