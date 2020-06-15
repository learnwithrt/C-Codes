#include<stdio.h>
//New Datatype
struct Student{
	int id;
	char name[30];
	float score;
};//finish the datatype
void main(){
	int num;//datatype variable_name;
	struct Student stu;//A new student
	printf("Enter ID ");
	scanf("%d",&stu.id);//Use dot operator
	//id of this student
	printf("Enter Name ");
	scanf("%s",stu.name);
	printf("Enter Score ");
	scanf("%f",&stu.score);
	printf("Student Details\n");
	printf("%d\t%s\t%f\t",stu.id,stu.name,stu.score);
}
