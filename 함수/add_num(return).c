#include <stdio.h>
#include <stdlib.h>

int add_num(){
	int i, j;
	printf("number1 ");
	scanf("%d",&i); 
	printf("number2 ");
	scanf("%d",&j);	
		
	return i+j;
}

int minus_num(){
	int i, j, m;
	printf("number1 ");
	scanf("%d",&i); 
	printf("number2 ");
	scanf("%d",&j);	
		
	if (i<j){
		m=i;
		i=j;
		j=m;
	}
			
	return i-j;
}

int X_num(){
	int i, j;
	printf("number1 ");
	scanf("%d",&i); 
	printf("number2 ");
	scanf("%d",&j);	
		
	return i*j;
}

int S_num(){
	int i, j, m;
	printf("number1 ");
	scanf("%d",&i); 
	printf("number2 ");
	scanf("%d",&j);	
	
	if (i<j){
		m=i;
		i=j;
		j=m;
	}
		
	return i/j;
}

int main(){
	int i, number, a, b, c, d;
	for (i=0; i<=4; i++){
		printf("\nnumber(a,b,c,d)");
		scanf("%d",&number);
			if (number==1){
				printf("%d",add_num());			
			} 
			else if (number==2){
			printf("%d",minus_num());	
			}
			else if (number==3){
				printf("%d",X_num());	
			}
			else if (number==4){
				printf("%d",S_num());	
			}
			else{
				printf("sorry");
		}
	}
}
