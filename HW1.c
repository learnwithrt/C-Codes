/*
Write a program to print 
			N=4
*      *	6	N 4+2	i=1		N-i	3*2	6
**    **	4			i=2		N-i	2*2 4	
***  ***	2			i=3		N-i 1*2 2
********	0			i=4		N-i 0*2 0
	:
	N rows
	i from 1 to N
*/
#include<stdio.h>
void main(){
	int i,j,N;
	printf("Enter the value of N ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		//Print the stars 2 times
		//J loop prints stars
		for(j=1;j<=i;j++){
			printf("*");
		}
		//Need space
		for(j=1;j<=2*(N-i);j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

}







