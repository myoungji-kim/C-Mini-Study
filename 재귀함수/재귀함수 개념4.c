#include <stdio.h>
#include <stdlib.h>

int add(int c){
		int b, d, e, f;

		if (c>0){
			b=c%10;
			printf("%d\n",b);
			add(c/10);
		}
		else {
			return;
		}
}

int main(){
	int a=0;
	scanf("%d",&a);
	add(a);
}
	
