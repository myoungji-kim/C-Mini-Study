#include <stdio.h>
#include <stdlib.h>

int add(int c, int b){
		printf("%d",c);
		b++;
		if (b<=4){
			add(c,b);
		}
		else {
			return;
		}
	}


int main(){
	int a=3;
	int b=0;

	add(a,b);
	
}
	
