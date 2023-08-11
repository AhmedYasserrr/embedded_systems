/************************************************************
* Filename: FindTheGreatest
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
int FindTheGreatest(int *a, int a_size);

int main()
{
    int a[10] = {4,1,2,6,7,56,9,10,12,3};
    printf("%d", FindTheGreatest(a, (int)(sizeof(a)/ sizeof(a[0]))));
}

int FindTheGreatest(int *a, int a_size){
    int mx = 0;
   for(int i=0; i < a_size; i++){
        if(a[i]> mx)
        {
            mx = a[i];
        }  
        else{}
   }
   return mx;
}