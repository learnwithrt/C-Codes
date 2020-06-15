/*
* * * * *	5Stars	0Spaces
 * * * *	4		1
  * * *		3		2
   * *		2		3
    *		1		4
   * *			
  * * *			
 * * * *		
* * * * *		

*/
#include<stdio.h>
void main(){
int i,j,k,n;	printf("Enter the number n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){//i is the row number n to 1
		//Loop for spaces
		for(k=1;k<=n-i;k++){
			printf(" ");//print 1 space
		}
		for(j=1;j<=i;j++){
			printf("* ");//print 1 star & 1 space
		}
		printf("\n");
	}
		//Second Stars
        for(i=2;i<=n;i++){
		//Loop for spaces
		for(k=1;k<=n-i;k++){
			printf(" ");//print 1 space
		}
		for(j=1;j<=i;j++){
			printf("* ");//print 1 star & 1 space
		}
		printf("\n");
	}
}
