#include<stdio.h>
void main(){//&- address of
	int a=10;
	int *p=&a;
	//address/ memory location
	printf("a = %d\n",a);
	printf("Value of a %d",*p);
	//value of a;
	printf("&a = %d\n",&a);
	printf("p = %d\n",p);
	printf("&p = %d\n",&p);

	int *edmond=&a;
	int *adrian=&a;
	printf("Value of a %d",
	*edmond);
		printf("Value of a %d",
	*adrian);
	//*-redirection operator
	char c='c';
	char *point=&c;
}



