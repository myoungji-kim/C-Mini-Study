#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, count, zero, nn, trash, x;
	
	printf("count");
	scanf("%d", &count);

	int num[count];
	
	for(i=0;i<count;i++){
		printf("num ");
		scanf("%d", &num[i]);		
		
				for(x=i;x>0;x--){
					if (num[x]<num[x-1]){
						trash=num[x-1];
						num[x-1]=num[x];
						num[x]=trash;
					}
				}
		}
	
	for (i=0; i<count; i++){
		printf("%d",num[i]);
	}
}
