#include<stdio.h>
void main(){//Code
	int N,fact=1;
	printf("Enter the value of N ");
	scanf("%d",&N);//5
	if(N>=0){
		for(;N>1;){
			fact=fact*N--;
		}
		printf("Here it is %d",fact);
	}
	else{
		printf("Stupid Number");
	}
}
