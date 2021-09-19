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
	
	if (start<=end)
	{
		for (i=start; i<=end; i++){
			total=total+i;
		}
	}
	else
		{
		for (i=end; i<=start; i++){
			total=total+i;
		}
		}
	printf("%d",total);
}
