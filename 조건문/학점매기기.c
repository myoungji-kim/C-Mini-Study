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
		printf("��� = %d, ����� ������ A �Դϴ�", aver);
	}
	else if (num1>=80)
	{
		printf("��� = %d, ����� ������ B �Դϴ�", aver); 
	}
	else if (num1>=70)
	{
		printf("��� = %d, ����� ������ C �Դϴ�", aver); 
	}
	else if (num1>=60)
	{
		printf("��� = %d, ����� ������ D �Դϴ�", aver); 
	}        
	else
	{
		printf("��� = %d, ����� ������ F �Դϴ�", aver); 
	}        


//	scanf("%d",)
}


// $num1%2==0
