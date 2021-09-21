#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, j;
	
	for (i=1; i<10; i++){
		for (j=2; j<10; j++){
		printf("%dx%d=%d ",j,i,i*j);
   		}
   	printf("\n");
	}
}

