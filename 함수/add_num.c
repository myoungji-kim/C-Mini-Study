#include <stdio.h>
#include <stdlib.h>

int add_num(){
	int i, j;
	printf("number1 ");
	scanf("%d",&i); 
	printf("number2 ");
	scanf("%d",&j);	
		
	printf("%d",i+j);
}

int main(){	
	add_num();
}
