#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, seat, seatnumber;
	
// 0) 1������ seat�������� �¼� ���� ������ֱ�
	
	printf("�¼��� �� ������ �ֳ���?");
	scanf("%d",&seat);	
	int Arr[seat];

	for (i=0; i<=seat-1; i++){
		Arr[i]=i+1;
	}
	
// 1) �¼� �������ֱ� (seatnumber��)

	for (i=0; i<seat; i++){
		printf("\n1������ %d������ �¼� ��, �����Ͻ� �¼� ��ȣ�� �������ּ���.", seat);
		scanf("%d", &seatnumber);
		printf("\n%d���� �����ϼ̽��ϴ�.", seatnumber);

		if(Arr[seatnumber-1]==-1){
			 printf("\n%d�� �¼��� �̹� ����� �ڸ��Դϴ�.\n", seatnumber);
			 i=i-1;
			}
			else if(seatnumber>seat){	
				printf("\n�ٽ� �Է����ּ���.\n");
				i=i-1;	
			}
			else {
				printf("\n%d�� �¼� ������ �Ϸ�Ǿ����ϴ�.\n", seatnumber);
				Arr[seatnumber-1]=-1;
			}
	}
	printf("\n��� �¼��� ����Ǿ����ϴ�.");
}

	
	

