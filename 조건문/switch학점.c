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
		case 10 : printf("점수= %d, 당신의 학점은 A 입니다.", aver); break;
		case 9 : printf("점수= %d, 당신의 학점은 A 입니다.", aver); break;
		case 8 : printf("점수= %d, 당신의 학점은 B 입니다.", aver); break;
		case 7 : printf("점수= %d, 당신의 학점은 C 입니다.", aver); break;
		case 6 : printf("점수= %d, 당신의 학점은 D 입니다.", aver); break;
		default : printf("점수= %d, 당신의 학점은 F 입니다.", aver);
		}
	

//	scanf("%d",)
}

