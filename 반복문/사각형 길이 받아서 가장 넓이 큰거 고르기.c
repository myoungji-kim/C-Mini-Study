#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, number;	
	int x, y, square, bin;
	
	printf("number");
	scanf("%d",&number);
	square=0;
	
	for (i=1; i<=number; i++){ 
		printf("x");	
		scanf("%d",&x);
		printf("y");
		scanf("%d",&y);
		
		if (square<x*y) {
			square=x*y;
		}				
				
	}
	
		printf("%d",square);	
	
}
