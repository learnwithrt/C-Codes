//Check if a string is palindrome
#include<stdio.h>
#include<string.h>//String header file
void main(){
	char word[30];
	char rev_word[30];
	printf("Enter the Word ");
	scanf("%s",word);
	//change the case to upper case
	strupr(word);
	strcpy(rev_word,word);//Original copy of word
	strrev(rev_word);//Reverse of word- string function
	//printf("%s",rev_word);
	if(strcmp(word,rev_word)==0){
		printf("\nIt is a Palindrome");
	}
	else{
		printf("\nIt is Not a Palindrome");
	}
}
