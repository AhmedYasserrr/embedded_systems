#include <stdio.h>

int main()
{
	int a[3][3], b[3][3];
	int i = 0;int j = 0;
	for(i = 0; i < 3;i++){
		for(j =0; j < 3; j++){
			scanf("%d", &a[i][j]);
			a[i][j] = (a[i][j]&1);
			b[i][j] = 1;
		}
	}

	for(i = 0; i < 3;i++){
		for(j =0; j < 3; j++){
			if(a[i][j]){
				b[i][j] = b[i][j]^1;
				if(i != 0) b[i-1][j] = b[i-1][j]^1;
				if(j != 0) b[i][j-1] = b[i][j-1]^1;
				if(i != 2) b[i+1][j] = b[i+1][j]^1;
				if(j != 2) b[i][j+1] = b[i][j+1]^1;
			}
		}
	}

	for(i = 0; i < 3;i++){
		for(j =0; j < 3; j++){
			printf("%d", b[i][j]);
		}
		printf("\n");
	}

    return 0;
}

