#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1, num2, num3, big, small, cal, p, m, x, n;
	printf("ù��° ���ڸ� �Է��ϼ���."); 
	scanf("%d", &num1);
	printf("�ι�° ���ڸ� �Է��ϼ���."); 
	scanf("%d", &num2);
	
	if (num1<num2)
	{
		num3=num1;
		num1=num2;
		num2=num3;
	} 
	
	printf("� ����� �ϰ� �����Ű���? +:1, -:2, x:3, /:4"); 	
	scanf("%d", &cal);
	p=num1+num2;
	m=num1-num2;
	x=num1*num2;
	n=num1/num2;	
	
	switch(cal)
		{
		case 1 : printf("%d + %d = %d", num1, num2, p); break;
		case 2 : printf("%d - %d = %d", num1, num2, m); break;
		case 3 : printf("%d * %d = %d", num1, num2, x); break;
		case 4 : printf("%d / %d = %d", num1, num2, n); break;
		default : printf("ó������ �ٽ� �Է��ϼ���.");
		}
	

	

//	scanf("%d",)
}

