#include <stdio.h>
#define arr_sz 100000

int main(void){
    int arr[arr_sz];
    int i;
    /* Generate different values for the array */
    for(i = 0; i < arr_sz; i++){
        arr[i] = i;
    }

    /* Choose number to search about */
    int number_to_find = 17;
    scanf("%d", &number_to_find);

    /* Linear search implementation */
    for(i = 0; i < arr_sz; i++){
            if (arr[i] == number_to_find){
                printf("The number %d is at index %d", number_to_find, i);
                break;
            }
    }

    return 0;
}
