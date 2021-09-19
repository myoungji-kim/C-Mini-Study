#include <stdio.h>
#include <stdlib.h>

int main()	{
	int number, a;
	printf ("number");
	scanf("%d", &number);
	
	int i=2;
	while(i<=number){
		if(number%i==0){
			number=number/i;
			printf("%d",i);			
			continue;
		}
		else
		{
		i++;			
		}	
	}
}
	
