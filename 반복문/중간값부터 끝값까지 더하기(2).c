#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, number;
	int start, end, total;

	printf("start");
	scanf("%d", &start);
	printf("end");
	scanf("%d",&end);
	total = 0;
	

	for (i=start; i<=end; i++){
		total=total+i;
	}
	printf("%d",total);
}
