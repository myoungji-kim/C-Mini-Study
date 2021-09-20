#include <stdio.h>
#include <stdlib.h>

int X_num(int i, int a){		
	return a*i*2;
}

int S_num(int i, int a){		
	return a*i*i;
}

int main(){
	const int a=3.14; 
	int i, X, S;
	
	printf("반지름을 입력하세요");
	scanf("%d",&i);
	
	printf("원의 둘레는 %d 입니다.",X_num(i,a));
	printf("\n원의 넓이는 %d입니다.",S_num(i,a));
}
