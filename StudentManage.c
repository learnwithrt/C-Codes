#include<stdio.h>
//function to add Student data to the file
void addStudent(){
	int id;
	char name[10];
	char city[20];
	char course[15];
	float score;
	printf("Enter the ID ");
	scanf("%d",&id);//&id - address of id
	printf("Enter the Score ");
	scanf("%f",&score);
	printf("Enter your Name ");
	scanf("%s",name);//%s - String
	//%s - NO & (ampersand)
	//name -pointer- address of name
	printf("Enter City ");
	scanf("%s",city);
	printf("Enter Course ");
	scanf("%s",course);
	//send this information to the file
	FILE *fp=fopen("Students.txt","a");
	//a- append mode(add data)
	//fprintf - file print function
	//to send data from the code to the file
	/*1. Which file?
	2. Which datatype?
	3. Which data?
	*/
	fprintf(fp,"%d\n",id);//1 integer
	fprintf(fp,"%s\n",name);//2 string
	fprintf(fp,"%s\n",city);//3 string
	fprintf(fp,"%s\n",course);//4 string
	fprintf(fp,"%f\n",score);//5 float
	//close the file
	fclose(fp);
 }
 void showStudents(){
 	int id;
 	char name[20],city[15],course[30];
 	float score;
 	//Read from the file
 	FILE *fp=fopen("Students.txt","r");//read
 	while(1){//read in the same order as written
 		//%s-String-DO NOT USE &(Address of)
 		fscanf(fp,"%d%s%s%s%f",&id,name,city,course
		 ,&score);
		 if(feof(fp)){//check if it is End of File
		 	break;
		 }	
		 //Print to the user
		 printf("ID : %d\n",id);
		 printf("Name : %s\n",name);
		 printf("City : %s\n",city);
		 printf("Course : %s\n",course);
		 printf("Score : %f\n",score);
	}
 	fclose(fp);
 }
 void searchStudent(){
 	int id,searched_id,found=0;
 	char name[20],city[15],course[30];
 	float score;
 	//Read from the file
 	printf("Which ID to search ? ");
 	scanf("%d",&searched_id);
 	FILE *fp=fopen("Students.txt","r");//read
 	while(1){
 		fscanf(fp,"%d%s%s%s%f",&id,name,city,course
		 ,&score);
		 if(feof(fp)){//check if it is End of File
		 	break;
		 }	j
		 //Print to the user if the id matches
		 if(id==searched_id){
		 	found=1;//student is found
			 printf("ID : %d\n",id);
			 printf("Name : %s\n",name);
			 printf("City : %s\n",city);
			 printf("Course : %s\n",course);
			 printf("Score : %f\n",score);
		}
	}
	if(found==0){//student was not found
		printf("Sorry! Student not available!\n");
	}
 	fclose(fp);
 }
void main(){
	int choice;
	do{
		printf("1. Add Student\n");
		printf("2. Show All Students\n");
		printf("3. Search a Student\n");
		printf("0. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				addStudent();
				break;
			}
			case 2:{
				showStudents();
				break;
			}	
			case 3:{
				searchStudent();
				break;
			}	
		}
	}while(choice!=0);
}
