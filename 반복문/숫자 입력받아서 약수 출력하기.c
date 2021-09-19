#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n;
	int number;
	int total;
	
	total=0;

	printf("number");
	scanf("%d", &number);

	for (i=1; i<=number; i++){
			if(number%i==0){
				total=total+1;
			}
		}
		printf("%d",total);
}
