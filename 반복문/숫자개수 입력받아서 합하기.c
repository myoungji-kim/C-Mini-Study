#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, number;
	int start, end, plus, minus, total;

	printf("start");
	scanf("%d", &start);
	printf("end");
	scanf("%d",&end);
	total=0;
	plus=0;
	minus=0;

	for (i=0; i<=end; i++){
		plus = plus+i;
	}
	for (i=1; i<start; i++){
		minus = minus+i;
	}
	total = plus - minus;
	printf("%d",total);
}

