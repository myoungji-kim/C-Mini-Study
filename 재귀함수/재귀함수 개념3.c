#include <stdio.h>
#include <stdlib.h>

int add(int c){
		printf("hello");
		if (c<=3){
			add(c+1);
		}
		else {
			return;
		}
	}

int main(){
	int a=0;
	
	add(a);
}	
	
