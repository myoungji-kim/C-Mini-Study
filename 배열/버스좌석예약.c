#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, seat, seatnumber;
	
// 0) 1번부터 seat번까지의 좌석 개수 만들어주기
	
	printf("좌석이 몇 번까지 있나요?");
	scanf("%d",&seat);	
	int Arr[seat];

	for (i=0; i<=seat-1; i++){
		Arr[i]=i+1;
	}
	
// 1) 좌석 예약해주기 (seatnumber번)

	for (i=0; i<seat; i++){
		printf("\n1번부터 %d까지의 좌석 중, 예약하실 좌석 번호를 선택해주세요.", seat);
		scanf("%d", &seatnumber);
		printf("\n%d번을 선택하셨습니다.", seatnumber);

		if(Arr[seatnumber-1]==-1){
			 printf("\n%d번 좌석은 이미 예약된 자리입니다.\n", seatnumber);
			 i=i-1;
			}
			else if(seatnumber>seat){	
				printf("\n다시 입력해주세요.\n");
				i=i-1;	
			}
			else {
				printf("\n%d번 좌석 예약이 완료되었습니다.\n", seatnumber);
				Arr[seatnumber-1]=-1;
			}
	}
	printf("\n모든 좌석이 예약되었습니다.");
}

	
	

