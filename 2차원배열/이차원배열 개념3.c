#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, a, b;
	int arr[7]={1,2,3,4,5,6};
	int arr2[2][3];
	

	b=0;
	
	for (i=0; i<=1; i++){
		for (a=0; a<=2; a++){
			arr2[i][a]=arr[b++];
		}
	}
	
	for (i=0; i<=1; i++){
		for (a=0; a<=2; a++){
			printf("%d",arr2[i][a]);
		}
		printf("\n");
	}
}

