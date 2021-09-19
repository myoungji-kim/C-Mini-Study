#include <stdio.h>
#include <stdlib.h>

int main()	{
	int i, number;
	int total;

	printf("add");
	scanf("%d", &number);
	total=0;

	for (i=0; i<=number; i++){
		scanf("%d",&number);
		total = total+number;
	}
	printf("%d",total);
}

