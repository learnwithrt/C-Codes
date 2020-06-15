/*Write a program to create a menu for food ordering
1. Pizza	-	45 RMB
2. Croissant-	15 RMB
3. Donut	-	10 RMB
4. Pastry	-	15 RMB
5. Bread	-	12 RMB
Keep asking for the order till the user enter 0. 
In the end print the total the user has to pay.
*/
#include<stdio.h>
void main(){
	int choice=0,total_bill=0;
	do{
		printf("1. Pizza\t	45 RMB\n");
		printf("2. Croissant\t	15 RMB\n");
		printf("3. Donut\t	10 RMB\n");
		printf("4. Pastry\t	15 RMB\n");
		printf("5. Bread\t	12 RMB\n");
		printf("0. Exit\n");
		printf("What do you want? ");
		scanf("%d",&choice);
		//use same variable in all conditions
		switch(choice){//check the value of choice
			case 1:{//what to do if the 
			//value of choice is 1
				total_bill+=45;
				//total_bill=total_bill+45;
				break;//keyword in C to stop
			}
			case 2:{
				//C will do this when the
				// value of choice is 2
				total_bill+=15;
				break;
			}
			case 3:{
				total_bill+=10;
				break;
			}
			case 4:{
				total_bill+=15;
				break;
			}	
			case 5:{
				total_bill+=12;
				break;
			}
			case 0:{
				break;
			}
		}
	}while(choice!=0);
	printf("The Total Bill is %d",total_bill);
}
















