/*
Write a program to find biggest of 10 numbers from user
*/
#include<stdio.h>
void main(){
	int a,i,max=-9999;
	//Loop -> Repeat something
	for(i=0;i<10;i++){//start of loop
		printf("Enter number ");
		scanf("%d",&a);
		//& -> address(Location) of
		if(a>max){
			max=a;
		}
	}//End of loop
	printf("Maximum is %d",max);
}
