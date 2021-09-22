#include <stdio.h>
#include <stdlib.h>

int add_num(int i, int j){		
	return i+j;
}

int minus_num(int i, int j){		
	int m;
	if (i<j){
		m=i;
		i=j;
		j=m;
		}
	return i-j;
}

int X_num(int i, int j){		
	return i*j;
}

int S_num(int i, int j){	
	int m;	
	if (i<j){
		m=i;
		i=j;
		j=m;
		}	
	return i/j;
}

int main(){
	int i, j, s, q;
	char number;
	scanf("%d",&i);	
	
	for (s=0; s<=3; s++){	
		scanf("%s",&number);
			if (number=='+'){
				scanf("%d",&j);
				printf("%d",add_num(i,j));
				i=add_num(i,j);		
				} 
			else if (number=='-'){
				scanf("%d",&j);
				printf("%d",minus_num(i,j));
				i=minus_num(i,j);						
				}
			else if (number=='*'){
				scanf("%d",&j);	  			
				printf("%d",X_num(i,j));   	
				i=X_num(i,j);	
				}
			else if (number=='/'){
				scanf("%d",&j);				
				printf("%d",S_num(i,j));	
				i=S_num(i,j);					
				}
			else{
				printf("sorry");
				}
		}
}
