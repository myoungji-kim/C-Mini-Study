#include <stdio.h>
#include <stdlib.h>

int main(){
	int number, i,count, big, small;
	big=0;

	printf("number");
	scanf("%d",&number);

	
	int Arr[i];
	for(i=0; i<number; i++){
		printf("count");
		scanf("%d", &count);
		Arr[i]=count;
	}
	
	big=Arr[0];
	small=Arr[0];
	
	
	for(i=0; i<number; i++){
		if (big<Arr[i]){
			big=Arr[i];
		}
		if (small>Arr[i]){
			small=Arr[i];
		}
	}	
	printf("%d %d", big, small);
}
	
	

