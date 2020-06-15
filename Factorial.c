/*
Write a program to print the factorial
of a number entered by the user. 
Example: if the input is 5, then the output
 should be given as Factorial of 5 is 120.
 Need only 1 LOOP
 1. Input
 2. Loop(For, WHILE, DO WHILE)
 3. Output
*/
#include<stdio.h>
void main(){//Code
	int N,fact=1;
	printf("Enter the value of N ");
	scanf("%d",&N);//5
	do{
		fact=fact*N--;//fact*5
	}while(N>1);
	printf("Factorial is %d",fact);
	//N-- => N=N-1
	//--N => N=N-1
}
//What is you LOC?(Lines of Code)











