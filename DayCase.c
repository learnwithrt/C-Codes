/*
Write a program where you accept day of the 
week as number and print if it is Sunday, Monday etc.
Use Switch Case
Enter the number of the day
3
The day of the week is Wednesday
Enter the number of the day
10
Stupid Day
*/
#include<stdio.h>
void main(){
	int N;
	printf("Enter the number of the day ");
	scanf("%d",&N);
	switch(N){
		case 1:{
			printf("It's Monday :'('");
			break;
		}
		case 2:{
			printf("It's Tuesday :(");
			break;
		}
		case 3:{
			printf("It's Wednesday :/ ");
			break;
		}
		case 4:{
			printf("It's Thursday :O ");
			break;
		}
		case 5:{
			printf("It's Friday :) ");
			break;
		}
		case 6:{
			printf("It's Saturday :D ");
			break;
		}
		case 7:{
			printf("It's Sunday :< ");
			break;
		}
		default:{//If the value does not match any case
			printf("Stupid Day :*");//Kiss
			break;
		}
	}	
}













