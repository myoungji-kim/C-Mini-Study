#include <stdio.h>
#include <stdlib.h>

int main()	{
	int number, total;
	
	total=0;


	int i=1;	
	while(i<10){
		printf("number");
		scanf("%d",&number);		
		total=total+number; 
		i++;
	}	
	printf("%d",total);
}
	
