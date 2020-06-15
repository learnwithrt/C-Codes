//Write a program to get N numbers from user
//And print sum N1 + N2 + N3 + .. NN = Sum
//45 + 5 + 3 + 34 + 31 = 118
#include<stdio.h>
void main(){
	int N,i;
	int arr[50];//Maximum values - 50
	long sum=0;//Maximum value of long(8 bytes)
	//is more than maximum value of int(4 bytes)
	printf("Enter the value of N ");
	scanf("%d",&N);
	printf("Enter %d Numbers\n",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		printf("%d ",arr[i]);
		if(i!=N-1){
		//I want + for all numbers except last
			printf("+ ");	
		}
		sum+=arr[i];//sum=sum+arr[i];
	}
	printf(" = %ld",sum);//sum-long-%ld
	
	
	
	
}
