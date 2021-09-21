#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, num3;
	int total;
	int aver;
	printf("Class1 Score?  "); 
	scanf("%d", &num1);
	printf("Class2 Score?  "); 
	scanf("%d", &num2);
	printf("Class3 Score?  "); 
	scanf("%d", &num3);
	total=num1+num2+num3;
	aver=total/3;


	if(aver>=90)
	{
		printf("평균 = %d, 당신의 학점은 A 입니다", aver);
	}
	else if (num1>=80)
	{
		printf("평균 = %d, 당신의 학점은 B 입니다", aver); 
	}
	else if (num1>=70)
	{
		printf("평균 = %d, 당신의 학점은 C 입니다", aver); 
	}
	else if (num1>=60)
	{
		printf("평균 = %d, 당신의 학점은 D 입니다", aver); 
	}        
	else
	{
		printf("평균 = %d, 당신의 학점은 F 입니다", aver); 
	}        


//	scanf("%d",)
}


// $num1%2==0
