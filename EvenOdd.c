/*
Write a program in c to take a number from the user and check
if it is even or odd
*/
#include<stdio.h>
void main(){
	int a;
	int remainder;
	scanf("%d",&a);//Read a from the user which is an integer
	//%d -> integer
	remainder = a%2;
	if(remainder==0)
	{//yes
		printf("Number is Even");
	}
	else//if the remainder is not 0
	{
		printf("Number is Odd");
	}
}
