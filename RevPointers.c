#include<stdio.h>
void main(){
	int a=10;
	int *p=&a;
	printf("The Value of a %d\n",a);
	printf("Address of a %d\n",&a);//address of a
	printf("Value of p %d\n",p);
	printf("Address of p %d\n",&p);
	//Use p to get the value of a
	printf("Value of a using p %d\n",*p);
}
