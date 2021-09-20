#include <stdio.h>
#include <stdlib.h>

int add(int c){
		printf("%d",c);
		if (c<=3){
			add(c+1);
		}
		else {
			return;
		}
	}
	
	
int main(){
	int b=0;
	
	add(b);
}	
	
