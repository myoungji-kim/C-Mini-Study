#include <stdio.h>
#include <stdlib.h>

int num;

int add_num(int i){	
	num=num+i;
	return num;
}

int minus_num(int i){		
	num=num-i;
	return num;	
}

int X_num(int i){		
	num=num*i;
	return num;	
}

int S_num(int i){
	num=num/i;
	return num;
}

int main(){
	int s, i, a;
	char cal;
	
	scanf("%d",&num);

	
	for (s=0; s<=3; s++){
//	while(getchar()!=' \n') continue;	
	scanf("%s",&cal);
		scanf("%d",&i);		
			if (cal=='+'){
				printf("%d", add_num(i));
			}
			else if (cal=='-'){
				printf("%d", minus_num(i));
			}
			else if (cal=='*'){
				printf("%d", X_num(i)); 
			}
			else if (cal=='/'){
				printf("%d", S_num(i));
			}
			else{
				printf("sorry");
			}
	}
}
