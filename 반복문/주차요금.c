#include <stdio.h>
#include <stdlib.h>

int main()	{
	int fee, money, etc;
	
	printf("fee");
	scanf("%d", &fee);

	
	int i=1000;
	while(i<=fee){
		printf("money");
		scanf("%d", &money);		

		if(money<fee){			
			printf("retry");
			continue;		
		}
		else if (money%i!=0){
			printf("retry2");
			continue;				
		}
		else{
			etc=money-fee;
			printf("Here %d", etc);	
			break;		
		}
				
	}
}
