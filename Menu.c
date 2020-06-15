/*
	Show a Menu
	1.Add(+)
	2.Subtract(-)
	3.Multiply(*)
	4.Divide(/)
	5.Modulus(%)
*/
#include<stdio.h>
void main(){
	int a,b,result,choice;
	printf("Enter Number 1 ");
	scanf("%d",&a);
	printf("Enter Number 2 ");
	scanf("%d",&b);
	do{
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulus\n");
		printf("-999. Exit\n");
		scanf("%d",&choice);
		if(choice==1){
			result=a+b;
		}
		else if(choice==2){
			result=a-b;
		}
		else if(choice==3){
			result=a*b;
		}
		else if(choice==4){
			result=a/b;
		}
		else if(choice==5){
			result=a%b;
		}
		else if(choice==-999){
			printf("Bye Bye");
		}
		else{
			printf("Stupid Choice");
		}
		printf("%d\n",result);
	}while(choice!=-999);
}






