#include<stdio.h>
void swap(int *x,int *y){
	int temp;
	temp=*x;//value at the address in x
	*x=*y;
	*y=temp;
}
void main(){
	int a=10,b=20;
	//Call By Reference(Address)
	swap(&a,&b);
	printf("a = %d\n",a);//20
	printf("b = %d\n",b);//10
}
