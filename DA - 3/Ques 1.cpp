#include <stdio.h>

struct student{
		char name[80];
		int roll;
		char p_name[80];
		int marks[6];
	};	
struct student s[10];	
void read(struct student *s);
int compute(struct student s);

int main(){
	for(int i = 0; i<10; ++i){
		read(&s[i]);
	}	
	for(int i = 0; i<10; ++i){
		printf("\nDetails of student number %d", i+1);
		printf("\nName: %s", s[i].name);
		printf("\nProgramme Name: %s", s[i].p_name);
		printf("\nRoll Number: %d", s[i].roll);
		compute(s[i]);
		printf("\n");		
	}
	
	return 0;
}
void read(struct student *s){
	char temp;
    static int j = 1; 
	printf("Detail for the student number %d: ", j);
	printf("\nEnter the name: ");
	gets(s->name);
	printf("Enter the programme name: ");
	gets(s->p_name);
	printf("Enter the roll number: ");
	scanf("%d", &s->roll);
	printf("Enter the marks for six subjects: ");
	scanf("%d%d%d%d%d%d", &s->marks[0], &s->marks[1], &s->marks[2], &s->marks[3], &s->marks[4], &s->marks[5]);
	scanf("%c", &temp); //Fixing the buffer error
	printf("\n\n");
	j++;
}
int compute(struct student s){
	int temp = 0, avg = 0, total = 0;
	for(int i = 0; i<6; ++i){
		total = total + s.marks[i];
	}
	avg = total/6;
	printf("\nTotal marks is %d.", total);
	printf("\nAverage marks is %d.", avg);
	return 0;
}
