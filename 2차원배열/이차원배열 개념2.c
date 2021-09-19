#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, a, b;
	int arr[3]={1,2,3};
	int arr2[2][3]={{1,2,3},{4,5,6}};
	
	b=0;
	
	for (i=0; i<=1; i++){
		for (a=0; a<=2; a++){
			arr[b++]=arr2[i][a];
		}
	}
	
	for(i=0; i<b; i++){
		printf("%d",arr[i]);
	}
}

