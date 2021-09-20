#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[]="hello";
	char b[5]="hello";
	char c[6]="hello";
	

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a));	
	printf("%d\n", sizeof(b[0]));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c[0]));
	printf("%d\n", sizeof(c));	

}
