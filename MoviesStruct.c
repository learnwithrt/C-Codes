struct Movie{
	char name[40];
	int year;
	char director_name[30];
	float ticket_price;
};//Movie is a new Structure
//Want that Movie should be a datatype
void main(){
	struct Movie all_movies[20];
	//Movie mo;
	//int num;
	int i,N;
	//all_movies can store information of 20 Movies
	printf("How many movies to add ? ");
	scanf("%d",&N);
	//This will have name,year,director_name& ticket_price
	for(i=0;i<N;i++){
		printf("Movie Name ");
		scanf("%s",all_movies[i].name);
		printf("Movie Year ");
		scanf("%d",&all_movies[i].year);
		printf("Enter Director Name ");
		scanf("%s",all_movies[i].director_name);
		printf("Enter Ticket Price ");
		scanf("%f",&all_movies[i].ticket_price);
	}
	for(i=0;i<N;i++){
		printf("%s\t%d\t%s\t%f\n",all_movies[i].name,
		all_movies[i].year,all_movies[i].director_name,
		all_movies[i].ticket_price);
	}
	
}
