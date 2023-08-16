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

    /* Binary search implementation */
    int st = arr[0];
    int end = arr[arr_sz-1];
    while(st <= end){
        int mid = st + (end - st)/2;
        if (number_to_find == arr[mid]){
            printf("The number %d is at index %d", number_to_find, mid);
            break;
        }
        else if (arr[mid] > number_to_find) { end = mid - 1;}
        else {st = mid + 1;}
    }

    return 0;
}
