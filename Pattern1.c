/*
	Write a program to print
	1
	22
	333
	4444
	55555
	:
	:
	The number of lines (N) is an input from user
*/
#include<stdio.h>
void main(){
	//Nested Loops -> When you have loop inside loop
	int i,j,N;
	printf("Enter Number of lines ");
	scanf("%d",&N);	
	//Line 1  -> 1 number
	//Line 2 -> 2 numbers
	//Line 3 -> 3 numbers
	//Line N -> N Numbers
	for(i=1;i<=N;i++){//i loop//N Rows
		for(j=1;j<=i;j++){//j loop//I need i columns in ith Row
			printf("%d",i);
		}
		printf("\n");//A new line in i loop
	}
}










