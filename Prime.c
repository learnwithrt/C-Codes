/*
Write a program to check if a number is prime or not
	79%1	0	Divide by 1 and number itself
	79%2	1
	79%3	1
	79%4	3
	79%5	4
	79%78	1
	79%79	0
	N=5
	5%2
	5%3
	5%4
	i=2 to (n-1)
	1 to N
*/

#include<stdio.h>
void main(){
	int i,j=0,k,N;
	printf("Enter the value of N ");
	scanf("%d",&N);
	if(N==1){
		printf("1 cannot be checked");
	}
	else{
		for(k=2;k<=N;k++){
			for(i=2;i<=k-1;i++){
				if(k%i==0){//can I divide N by any other number
					j=1;//Number is not prime
				}
			}
			if(j!=1){//!= Not equal to
				printf("%d is a Prime Number\n",k);
			}
			j=0;
		}
	}
//			else{
//				printf("%d is not a prime number",N);
//			}
//	}		
	//If I cannot divide then it is prime
}












