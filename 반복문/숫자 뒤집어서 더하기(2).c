#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i;
	int start, end, total, bin;

	printf("start");
	scanf("%d", &start);
	printf("end");
	scanf("%d",&end);
	total=0;
	bin=0;
	
	if(start>end){
		bin=start;
		start=end;
		end=bin;
	}

	for (i=start; i<=end; i++){
		total=total+i;
	}
	printf("%d",total);
}
