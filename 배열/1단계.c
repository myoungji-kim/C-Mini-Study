#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, number;
	int Arr[10]={0,};

		for (i=0; i<10; i++){
			printf("number");
			scanf("%d", &number);
			Arr[i]=number;		
		}
		for (i=0; i<10; i++){
		printf("%d \n", Arr[i]);			
		}	
}

