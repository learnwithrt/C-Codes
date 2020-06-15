#include<stdio.h>
void main(){
	int x=10;
	int *p;
	p=&x;
	printf("%d %d\n",&x,p);
	//printf("%d %d\n",x++,*p++);
	//printf("%d %d\n",++x,*p++);
	printf("%d %d\n",x++,*++p);
	int *q=&x;
	int *r	=&q;
	printf("%d\n",*q);
//	printf("%d\n",**r);

}
