/************************************************************
* Filename: selection sort
* Author: Ahmed Yasser
* Date: 11 / 8 / 2023
************************************************************/
#include <stdio.h>
void sort(int a[], int a_size);

int main()
{
    int a[10] = {4,1,2,6,7,56,9,10,12,3};
    sort(a, (int)(sizeof(a)/ sizeof(a[0])));
    int i = 0; 
    for(i =0; i < 10; i++){
        printf("%d ", a[i]);
    }
}

void sort(int a[], int a_size){
    int i =0; 
    for(i=0; i < a_size; i++){
        int j = 0; 
        for(j=0; j < a_size; j++){
                if(a[j] > a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;}
        }
    }
}