#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, m, m2;
	printf("ù��° ���ڸ� �Է��ϼ���."); 
	scanf("%d", &num1);
	printf("�ι�° ���ڸ� �Է��ϼ���."); 
	scanf("%d", &num2);
	m = num1-num2;
	m2 = num2-num1;
	
	if (num1>=num2)
	{
		printf("%d ���� %d ���� ���̴� %d", num1, num2, m);
	}
	else
	{
		printf("%d ���� %d ���� ���̴� %d", num1, num2, m2);
	}
	

	

//	scanf("%d",)
}

