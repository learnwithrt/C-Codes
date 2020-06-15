/*
	Write a program to print
	:
	:
	*****
	****
	***
	**
	*
	The number of lines (N) is an input from user
*//*
Nth line first
N-1th line
N-2th line
*/
#include<stdio.h>
void main(){
	int i,j,N;
	printf("Enter N ");
	scanf("%d",&N);
	for(i=N;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}











