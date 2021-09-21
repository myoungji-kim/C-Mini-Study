#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, j, m, jj, mm;
	i=1;
	j=1;
	jj=1;
	m=1;
	mm=10;
		
	for (i=1; i<=3; i++){
		for (j=jj; j<jj+5; j++){
				printf("%d ",j);			
			}
		printf("\n");
		for (m=mm; m>=mm-4; m--){
				printf("%d ",m);
			}	
		printf("\n");		
		jj=jj+10;
		mm=mm+10;
		}
		
	}
