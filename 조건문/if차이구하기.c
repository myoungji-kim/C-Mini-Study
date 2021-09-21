#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, m, m2;
	printf("첫번째 숫자를 입력하세요."); 
	scanf("%d", &num1);
	printf("두번째 숫자를 입력하세요."); 
	scanf("%d", &num2);
	m = num1-num2;
	m2 = num2-num1;
	
	if (num1>=num2)
	{
		printf("%d 값과 %d 값의 차이는 %d", num1, num2, m);
	}
	else
	{
		printf("%d 값과 %d 값의 차이는 %d", num1, num2, m2);
	}
	

	

//	scanf("%d",)
}

