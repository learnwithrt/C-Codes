#include<stdio.h>
void main(){
	int i,j;
	for(i=0;i<5;i++){//i=1
		for(j=0;j<=i;j++){//0<=1?
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	i=0;
	
	while(i<5){//1<5
		j=0;//J to become 0 again and again	
		while(j<=i){//1<=0
			printf("%d",i);
			j++;//j=1
		}
		printf("\n");
		i++;//i=1
	}
}
