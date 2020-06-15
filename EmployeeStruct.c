#include<stdio.h>
struct Employee{
	int id;
	float salary;
	char name[30];
	char position[30];
}typedef Employee;//Employee to be a new datatype
//typedef - Define(create) a new datatype
void main(){
	Employee emp;
	printf("Enter Employee Id ");
	scanf("%d",&emp.id);
	printf("Enter Name ");
	scanf("%s",emp.name);
	printf("Enter Position ");
	scanf("%s",emp.position);
	printf("Enter Salary ");
	scanf("%f",&emp.salary);
	printf("Employee Details\n");
	printf("%d\t%s\t%s%f",emp.id,emp.name,
	emp.position,emp.salary);
}
