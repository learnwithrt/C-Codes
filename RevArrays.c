#include<stdio.h>
void main(){
//	int stu_id1=12523;//stu_id[0]
//	int stu_id2=122172;//stu_id[1]
//	int stu_id3=456342;
//	:
//	int stu_id62=19271;//stu_id[61]
//	All Student IDs are integers
	int stu_id[62];//Student IDs for 62 students;
	stu_id[0]=12523;
	stu_id[1]=122172;
	stu_id[2]=456342;
	//print student IDs-62 lines of code
		printf("%d",stu_id1);
		printf("%d",stu_id2);
		printf("%d",stu_id3);
		:
		printf("%d",stu_id62);
	//By Using For loop
	for(i=0;i<62;i++){
		printf("%d\n",stu_id[i]);
	}
	//stu_id is of type int
	//all student ids should be integer
	float scores[62];
	//all scores must be float. they cannot be char
	
}
