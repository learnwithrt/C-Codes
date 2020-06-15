/*
Write a program in C to find biggest of 3 numbers entered by user.
*/
#include <stdio.h>
void main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){//is a bigger than b?
		if(a>c){//is a bigger than C?
			printf("%d is the biggest\n",a);
		}else{
			printf("%d is the biggest\n",c);
		}
	}else{//b is bigger than a
		if(b>c){
			printf("%d is the biggest\n",b);
		}else{
			printf("%d is the biggest\n",c);
		}
	}
}
