#include <stdio.h>

int main() {
	int i = 0, x = 1;
   printf("%d\n",i);
   x = i++;
   printf("%d\n",i);
   x += ++i;
   printf("%d\n",x);
   return 0;
}
