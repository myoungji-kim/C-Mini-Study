#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	printf("여자면 1, 남자면 2를 입력하세요. "); 
	scanf("%d", &num);

	switch(num)
		{
		case 1 : printf("왼쪽으로 가세요. "); break;
		case 2 : printf("오른쪽으로 가세요. "); break;
		default : printf("다시 입력하세요.");
		}
	

//	scanf("%d",)
}


// $num1%2==0
