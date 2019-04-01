#include <stdio.h>
#include <stdlib.h>

typedef struct met {
	char name[20];
	char surname[20];
	int year;
	int salary;
	int account;

}mete;

int func(mete *new, int count); 
void print(mete *new, int count);
void record(mete *new, int count);

int main(){
	int count, i;
	mete *new;
	printf("enter count\n");
	scanf("%d", &count);
	new = (mete *)malloc(count*sizeof(mete));
	
	func(new,count);
	record(new,  count);
		
		print(new, count);	
	free(new);
}

int func(mete *new, int count){
	int i;
	
	
	printf("enter name , surname, year, salary, account\n");
	for(i=0; i< count; i++){	
		
		scanf("%s",new[i].name);
		scanf("%s",new[i].surname);
		scanf("%d",&new[i].year);
		scanf("%d",&new[i].salary);
		scanf("%d",&new[i].account);
	}
	return 1;
}

void print(mete *new, int count){
	int i;
	for(i=0; i< count; i++){
		printf("%s %s %d %d %d\n",new[i].name,new[i].surname,new[i].year,new[i].salary,new[i].account);
	}
}

void record(mete *new, int count){

	FILE *open;
	open = fopen("data.bin","wb");
	
	fwrite(new, 1 , sizeof(new), open);

	fclose(open);
}


























