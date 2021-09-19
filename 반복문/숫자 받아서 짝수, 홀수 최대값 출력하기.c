#include <stdio.h>
#include <stdlib.h>

int main()	{
	int number, i, a, b, c, d;
	a=0;
	b=0;
	c=0;
	
	printf("number");
	scanf("%d",&number);
	
	for (i=1; i<=number; i++){ 
		printf("write");
		scanf("%d", &a);
		if (a%2==0){
			if (b<a){
				b=a;
			}
		}
		else {
			if (c<a){
				c=a;
			}
		}
	}
	printf("%d %d",b, c);
}
		

