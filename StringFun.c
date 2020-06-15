#include<stdio.h>//printf and scanf
#include<string.h>//Header file for string functions
void main(){
	char name[20]="Programming";
	//Tell me how many characters
	//What is the length of the string
	printf("%d\n",strlen(name));//String length
	printf("%d\n",strcmp("Prog","Program"));
	printf("%d\n",strcmp("Program","Program"));
	printf("%d\n",strcmp("Program","Progr"));
	//String Compare
	char password[20];//Login
	int try=0;
	AskAgain://Create a label as AskAgain
	printf("Enter the password ");
	scanf("%s",password);//%s - String AND No &(Ampersand)
	if(strcmp(password,"Stupid")==0){
		printf("Welcome!\n");
	}
	else{
		printf("Incorrect Password. Try Again\n");
		++try;
		if(try<3)
			goto AskAgain;
		else
			printf("Get Out");
	}
	
	
	
}
