/*
	Write a program to print
	1
	2	3
	4	5	6
	7	8	9	10
	11	12	13	14	15
	:
	:
	The number of lines (N) is an input from user
*/
#include<stdio.h>
void main(){
	int i,j,N,number=1;//declare the variables
	printf("Enter the value of N ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		//j loop is inside i loop
		for(j=1;j<=i;j++){
			printf("%d\t",number);//print the number
			number++;//increment the number
			//\t -> tab space
		}
		//After each row, i should go to the new line
		printf("\n");
	}	
}











