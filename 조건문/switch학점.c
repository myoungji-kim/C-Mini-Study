#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, num3, num4, num5, num6;
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
	num4=aver%10;
	num5=aver-num4;
	num6=num5/10;
	
	
	switch(num6)
		{
		case 10 : printf("����= %d, ����� ������ A �Դϴ�.", aver); break;
		case 9 : printf("����= %d, ����� ������ A �Դϴ�.", aver); break;
		case 8 : printf("����= %d, ����� ������ B �Դϴ�.", aver); break;
		case 7 : printf("����= %d, ����� ������ C �Դϴ�.", aver); break;
		case 6 : printf("����= %d, ����� ������ D �Դϴ�.", aver); break;
		default : printf("����= %d, ����� ������ F �Դϴ�.", aver);
		}
	

//	scanf("%d",)
}

