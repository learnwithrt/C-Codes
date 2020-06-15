#include<stdio.h>
void add(){//created by RT
//function to add 2 numbers
//Define the function
	int a,b,result;//declare variables
	printf("Enter number 1 ");
	scanf("%d",&a);
	printf("Enter number 2 ");
	scanf("%d",&b);
	result=a+b;
	printf("%d\n",result);
}//end of function add
void main(){//created by Ritchie
	//Call the function
	//use the function
	add();
	//come back after function
	printf("Done! %d");
	//I call function add 
	//in function
}
