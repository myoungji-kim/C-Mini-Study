#include <stdio.h>
#include <stdlib.h>

int X_num(int i, int a){		
	return a*i*2;
}

int S_num(int i, int a){		
	return a*i*i;
}

int main(){
	const int a=3.14; 
	int i, X, S;
	
	printf("�������� �Է��ϼ���");
	scanf("%d",&i);
	
	printf("���� �ѷ��� %d �Դϴ�.",X_num(i,a));
	printf("\n���� ���̴� %d�Դϴ�.",S_num(i,a));
}
