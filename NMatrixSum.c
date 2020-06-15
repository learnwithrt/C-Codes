/*
Program to add 2 M by N Matrices. The value of M and N
is from the user. M - Number of rows
N-Number of Columns
*/
void main(){
	int M,N;
	int i,j;
	int M1[20][20],M2[20][20];
	printf("Enter Number of Rows ");
	scanf("%d",&M);
	printf("Enter Number of Columns ");
	scanf("%d",&N);
	printf("Enter Matrix 1 \n");
	for(i=0;i<M;i++){//Because there are M rows
		for(j=0;j<N;j++){//N Columns
			scanf("%d",&M1[i][j]);
		}
	}
	printf("Enter Matrix 2 \n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&M2[i][j]);
		}
	}
	//Add M1 and M2, print the result
	printf("Result is \n");
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d\t",M1[i][j]+M2[i][j]);
		}
		printf("\n");
	}
}
