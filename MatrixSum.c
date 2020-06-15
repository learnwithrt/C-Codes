#include<stdio.h>
void main(){
	int M1[3][3],M2[3][3],M3[3][3];
	int i,j;//2 Loops- 1 loop for row and 1 loop for col
	printf("Enter Matrix 1\n");
	for(i=0;i<3;i++){//for row
		for(j=0;j<3;j++){//for column
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Enter Matrix 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&M2[i][j]);
			M3[i][j]=M1[i][j]+M2[i][j];
		}
	}	
	printf("Matrix 3 Is \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",M3[i][j]);
		}
		printf("\n");
	}
}
