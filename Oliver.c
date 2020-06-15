#include<stdio.h>
int main (){
	int R,C,K,N;
	printf("Enter number of line");
	scanf("%d",&N);
	for (R=1;R<=N;R++){
		for(C=1;C<=2*N;C++){
			if(C<=R){
				printf("*");
			}else if (C>=N*2+1-R){
				printf("*");
			}else{
				printf(" ");
			}	
		}
		printf("\n");
	}
}
