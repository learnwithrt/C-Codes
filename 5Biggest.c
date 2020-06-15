/*
Write a program to find biggest of 5 numbers from user
*/
void main(){
	int a,b,c,d,e,max;
	printf("Enter 5 Numbers ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);//Take 5 numbers from user
	/*
	if(condition)
	*/
	if(a>b&&a>c&&a>d&&a>e){
		max=a;
	}
	else if(b>a&&b>c&&b>d&&b>e){
		max=b;
	} 
	else if(c>a&&c>b&&c>d&&c>e){
		max=c;
	}
	else if(d>a&&d>b&&d>c&&d>e){
		max=d;
	}
	else{
		max=e;
	}
	printf("Maximum is %d",max);
}




