#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, num3;
	int total;
	int aver;
	printf("Korean Score?  ");
	scanf("%d", &num1);
	printf("Math Score?  ");	
	scanf("%d", &num2);	
	printf("English Score?  ");	
	scanf("%d", &num3);	
	total=num1+num2+num3;
	aver=total/3;

	if(aver>=80)
	{
		printf("Your average is %d, 합격", aver);
	}
	else
	{
		printf("Your average is %d, 불합격", aver);
	}


//	scanf("%d",)
}


// $num1%2==0
