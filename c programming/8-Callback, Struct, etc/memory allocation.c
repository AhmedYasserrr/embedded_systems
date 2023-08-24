#include <stdio.h>
#include <stdlib.h>

int main(){

 int * ptr = NULL;
 ptr = (int *) malloc(4 * sizeof(int));
 *ptr = 1;
 *(ptr+1)= 10;
 *(ptr+2) = 8;
//  free(ptr);
 printf("%d\n", *ptr);
  printf("%d\n",  *(ptr+1));
   printf("%d\n", *(ptr+2));
}