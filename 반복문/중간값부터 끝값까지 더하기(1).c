#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, number;
	int start, end, plus, minus, total, bin;

	printf("start");
	scanf("%d", &start);
	printf("end");
	scanf("%d",&end);
	total=0;
	plus=0;
	minus=0;

	for (i=start; i<=end; i++){
		if(start<=end){
			total=total+i;
		}
		else
		{		
			start=bin;
			end=start;
			bin=end;
			total=total+i;		
		}
	}
		printf("%d",i);	
}
