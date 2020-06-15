#include<stdio.h>
int add();//function declaration
//3 things together are called as prototype
//prototype-
int multiply(int x,int y);
float divide(float,float);
//know the datatype and number of parameters
void main(){
	int result=add();
	printf("Sum is %d\n",result);
	result=multiply(12,30);//function call
	printf("Product is %d\n",result);
	printf("Division is %f\n",divide(30,4));
}
float divide(float x,float y){
//	float res=x/y;
//	return res;
	return x/y;
}
//function definition
int multiply(int x,int y){//x,y, res are 
//local variables of multiply
	int res=x*y;
	return res;
}

int add(){//x,y and res are local variables of 
//add
	int x,y,res;
	scanf("%d%d",&x,&y);
	res=x+y;//return the value to main
	return(res);
}
