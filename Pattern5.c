/*
	Write a program to print
	*
	* *
	* * *
	* * * *
	* * * * *
	N-1 to N-N
	N=5 
	-1
	-2
	-3
	-4
	-5
	    *			4		N-1		i=1		N-i spaces
	   * *			3		N-2		i=2
	  * * *			2		N-3		i=3
	 * * * *		1		N-4		i=4
	* * * * *		0		N-5		i=5
	The number of lines (N) is an input from user
*/
#include<stdio.h>
void main(){
	int i,j,k,n;
	printf("Enter the number n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		//A loop before the stars for n-i spaces
		for(k=1;k<=n-i;k++){
			printf(" ");
		} 
		for(j=1;j<=i;j++){
			printf("* ");//print 1 star & 1 space
		}
		printf("\n");
	}
}







