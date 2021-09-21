#include <stdio.h>
#include <stdlib.h>

int main()	{
	int number, i, j;
	
	printf("number");
	scanf("%d",&number);
	
	for (i=2; i<=number; i++){	
		for (j=2; j<=i; j++){
				if(i%j==0){
					if(i==j){				
						printf("%d",i);
					}
					else {
						break;
					}
				}
			}
		}
	}											
		

