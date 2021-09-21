#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, j;
	i=1;
	j=1;
		
	for (i=1; i<=5; i++){
		for (j=1; j<=5; j++){
			if (j+i>=6){
				printf("*");				
			}		
			else{
				printf(" ");
			}
	   }
	printf("\n");
	}
}		
