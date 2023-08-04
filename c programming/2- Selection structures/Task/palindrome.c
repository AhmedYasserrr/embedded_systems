#include <stdio.h>

int main(void){
    int n; 
    printf("Enter a five-digit palindrome: ");
    scanf("%lld", &n);
    int d1 = n%10; n/= 10;
    int d2 = n%10; n/= 100;
    int d4 = n%10; n/= 10;
    int d5 = n%10;
    if(d1 == d5 && d2 == d4) printf("YES");
    else printf("NO");

    return 0;
}