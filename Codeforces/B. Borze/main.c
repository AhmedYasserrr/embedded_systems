#include<stdio.h>

int main (){
    char s[201];
    scanf("%[^\n]%*c", &s);
    int i =0;
    while(i < 201){
        if(s[i] != '.' && s[i] != '-') break;
        if(s[i] == '.') printf("0");
        else if(s[i] == '-') {
            i++;
            if(s[i] == '.') printf("1");
            else if(s[i] == '-') printf("2");
        }
        i++;
    }
    return 0;
}