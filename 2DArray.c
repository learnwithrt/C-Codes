//2D Array- 2 Dimensional Array
#include<stdio.h>
void main(){//Col  0   1
	int i,j;
	int arr[3][2]={34,45,//row 0
				   56,78,//row 1
				   98,87};//row 2
	printf("%d\n",arr[1][1]);//78
	printf("%d\n",arr[2][0]);//98
	printf("%d\n",arr[1][0]);//?56
	for(i=0;i<3;i++){//Loop for rows
		for(j=0;j<2;j++){//Loop for Columns
			printf("%d ",arr[i][j]);//i-row
			//j-col
		}
		printf("\n");
	}
	
	
	
}
