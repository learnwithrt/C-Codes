#include<stdio.h>
void main(){
	int a=10;//1 Value
	int x=34,y=45,z=56;
	//index - position - place 
	int arr[3]={34,45,56};//This can have 3 values
	printf("%d\n",arr[0]);//Value at index 0 - 34
	printf("%d\n",arr[1]);//Value at index 1 - 45
	printf("%d\n",arr[2]);//Value at index 2 - 56
	for(a=0;a<3;a++){
printf("Value at index %d is %d\n",a,arr[a]);
	}
}
