#include <stdio.h>
#include <stdlib.h>

int main()	{
	int mini, max, number;
	
	printf("mini");
	scanf("%d", &mini);
	
	printf("max");
	scanf("%d", &max);
	
	printf("number");
	scanf("%d", &number);
	
	int i=mini;
	while(i<max){
		if (i%number==0){
			printf("%d",i);
			break;	
		}
		i++;
	}
}
