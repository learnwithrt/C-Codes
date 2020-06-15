#include<stdio.h>
void main(){
	//Transient(Temporary) Information
	//Permanent Information - DB(Database)
	//Easiest way for DB - Files
	char name[30];
	printf("Enter Your Name ");
	scanf("%s",name);
	printf("Names in DB %s",name);
	FILE *fp=fopen("Info.txt","a");//write-w
	//pointer is the pen
	//print to a file
	//a - append (add information)
	fprintf(fp,"%s\n",name);
	//What data you want to write
	//What is the type of data
	fclose(fp);
	FILE *read=fopen("Info.txt","r");
	//r- read
	while(1)//Infinite times
	{
		fscanf(read,"%s",name);//read and copy to name	
		printf("Name is %s\n",name);
		if(feof(read))//feof- end of file function
		{
			break;//stop
		}
	}
	fclose(read);
	
}
