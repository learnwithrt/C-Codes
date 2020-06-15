/*
Write a program in C to read Data.txt and calculate
number of vowels and number of consonants
Vowels		A E I O U
Consonants	BCDFGH....Z
*/
#include<stdio.h>
void main(){
	FILE *fp;
	int vowel_count=0;
	int consonant_count=0;
	char ch;
	fp=fopen("Data.txt","r");
	//r- read mode
	while(1){
		ch=getc(fp);//get 1 character
		switch(ch){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowel_count++;
				break;
			default:
				consonant_count++;
		}
		if(ch==EOF){
			break;
		}
	}
	printf("Vowels %d\n",vowel_count);
	printf("Consonants %d\n",consonant_count);
}






