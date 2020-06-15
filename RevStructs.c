//Array can have only one type of value
//When you want different types of values as a 
//new datatype- Structures
struct Student{
	int id;
	float score;
	char name[30];
	char gfbfname[30];
	char city[30];
};
//typedef- define Teacher as a new Datatype
typedef struct Teacher{
	int id;
	char name[30];
	char department[30];
};
void main(){
	Teacher t1;
	t1.name="RT";
	t1.id=666;
	t1.department="Software";
	struct Student Johny;
	Johny.id=121921;
	Johny.name="Johny";
	Johny.score=57.56;
	
}
