#include<stdio.h>
//return_type function_name(parameters);-> 
//function prototype
void welcome();//Function declaration
void bye();//Declaration should be before main
void main(){
	welcome();//call welcome
	bye();//call bye
}
void welcome(){//Function Definition
	printf("Welcome");
}
void bye(){
	printf("\n Bye");
}
