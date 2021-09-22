#include <stdio.h>
#include <stdlib.h>

int main(){

	int a=3;
	int *aptr;
	aptr=&a;
	
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",aptr);
	printf("%d\n",*aptr);
	
	*aptr=10;
	
	printf("%d\n",a);
	printf("%d\n",*aptr);
	printf("%p\n",aptr);

}
