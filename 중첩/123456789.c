#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, j;
	i=1;
	j=1;
		
	for (i=1; i<=5; i++){
		for (j=i; j<i+5; j++){
			printf("%d ",j);		
	   }
	printf("\n");
	}
}		

