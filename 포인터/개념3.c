#include <stdio.h>
#include <stdlib.h>

int main(){

	int num=30;
	int *numptr;
	numptr=&num;
	int *num2ptr;
	
	num2ptr=malloc(4);
	*num2ptr=20;
	int num2=*num2ptr;
	
	printf("%d\n",num);
	printf("%d\n",*numptr);

	printf("%d\n",*numptr+1);	
	
	printf("%d\n",num2);
	printf("%d\n",*num2ptr);

	printf("%d\n",*num2ptr+1);

	printf("%p\n",numptr);
	
	printf("%p\n",numptr+1);
	
	printf("%p\n",num2ptr);
	
	printf("%p\n",num2ptr+1);	

	free(num2ptr);
}
