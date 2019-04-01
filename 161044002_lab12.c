#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef union mmmm{
	char *snum;
	int sonum;
		
}nnn;

typedef struct Student{
	
		nnn ID;
		
			
	int idtype;
	char name[10];
	char surname[10];
	int midterm1;
	int midterm2;
	int final;
	int grade;
}S1;
	
void create(struct Student *student){
	student->idtype = rand()%2;
	printf("ENter name and surname:");
	scanf("%s %s",student->name,student->surname);
	printf("\n");
	student->midterm1 = rand()%101;
	student->midterm2 = rand()%101;
	student->final = rand()%101;
}

void print(struct Student student){
	printf("%s %s \n %d %d %d ",
	student.name,student.surname,student.midterm1,student.midterm2,
	student.final);
}

void calc_grade(struct Student *student){
	int total = 0;
	total =total+ student->midterm1*0.25;
	total =total+ student->midterm2*0.25;
	total =total+ student->final*0.5;
	
	printf("weight of exam %d ",total);
}	

int main(){
	srand(time(NULL));
	struct Student *student;
	struct Student  *arr;
	int i, numstd;
	
	
	
	printf("entre numstd\n");
	scanf("%d",&numstd);
	arr = (Student *) calloc(numstd,sizeof(struct Student);
	for(i = 0; i < numstd; i++){
		create(&student);		
		calc_grade(&student);	
	}
	for(i = 0; i < numstd; i++){
		print(student);
	}	
return 0;
}



