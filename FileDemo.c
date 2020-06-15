#include<stdio.h>
void main(){
	//int *p;//Integer pointer
	FILE *fp;//A file pointer which can
	//file *fp;- Not okay
	//be used to read or write to the file
	//1. Open File
	fp=fopen("Data.txt","a");
	//w or a- C will create the file
	//if it doesn't exist
	//fopen - file open function
	//1. Which file to open
	//2. What do you want to 
	//do with the file?(Mode of the file)
	//3 Basic Modes
	/*1. Write(Delete everything 
	and start from zero)-w
	2. Read-r
	3. Append(Add information to the file)
	-a*/
	//Write a character(1 Letter)
	putc('R',fp);//single quotes
	putc('A',fp);//single quotes
	putc('H',fp);//single quotes
	putc('U',fp);//single quotes
	putc('L',fp);//single quotes
	//Put character	
	//Last Step. Close the file
	fclose(fp);//close the file
}
