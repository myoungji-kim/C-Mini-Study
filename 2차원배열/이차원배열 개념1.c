#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, a;
	int arr[3]={1,2,3};
	int arr2[2][3]={{1,2,3},{4,5,6}};
	
	for (i=0; i<=1; i++){
		for (a=0; a<=2; a++){
				printf("%d",arr2[i][a]);
		}
		printf("\n");
	}
}

