#include <stdio.h>
#include <stdlib.h>

int add(int c){
		int b, d, e, f;

		if (c>=10){
			b=c/10;
			add(c/10);				
			printf("%d\n",c%10);				
		}
		else {
			printf("%d\n",c);
		return;
		}
}

int main(){
	int a=0;
	scanf("%d",&a);
	add(a);
}

