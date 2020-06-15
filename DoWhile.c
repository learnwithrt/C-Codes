#include<stdio.h>
void main(){
	int i;
	i=5;
	//check the condition on exit
	do{//5<2
		printf("%d",i);
		i++;//i=6
	}while(i<=2);//6<=2
	//Loop finished because 5 is not less than 2
}//Do while will run at least ONCE

