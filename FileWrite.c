#include<stdio.h>
void main(){
	FILE *myFile;
	char ch='T';//character ch
	myFile=fopen("Test.txt","w");
	while(1){//Infinite Loop
		ch=getchar();//get 1 character 
		//from user
		if(ch==EOF){//EOF - End of File	
			break;
		}//EOF - Ctrl + Z
		putc(ch,myFile);
	}
	fclose(myFile);//Close the file
	//Open the file again but for reading
	myFile=fopen("Test.txt","r");
	while(1){
		ch=getc(myFile);//get 1 character
		if(ch==EOF){
			break;
		}
		printf("%c",ch);//%c - character
	}
	
	
	
	
	
	
	
	
}
