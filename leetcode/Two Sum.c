#include<stdio.h>

int main(){
    const int n =3;
    int t = 8;
    int myNumbers[n];
    myNumbers[0]= 0;
    myNumbers[1]= 8;
    myNumbers[2]= 9;
    sort(myNumbers, myNumbers+n);
    int i= 0; int j = n-1;
    while(myNumbers[i] + myNumbers[j] != t && j != i){
        if(myNumbers[i] + myNumbers[j] > t){
            j--;
        }
        else{
            i++;
        }
    }
    printf("%d %d", myNumbers[i], myNumbers[j]);

}