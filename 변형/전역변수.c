#include <stdio.h>
#include <stdlib.h>

int num=3;

int add(i){
	num++;
	return num;
}

int add1(num1){
	num1++;
	return num1;
}


int main(){
	int num1=3;
	printf("%d", add(num));	
	printf("%d", add1(num1));
	printf("%d", num);		
	printf("%d", num1);
}

