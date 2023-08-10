#include <stdio.h>

int main(){
	char t;
	struct student{
		char name[50];
		int roll;
		char address[50];
		
		struct DOB{
			int day;
			int month;
			int year;
			
		}date;
		
		struct mark{
		int marks[5];
	}m;
	};
	
	
	
	struct student s[10];
	
	for(int i = 0; i<10; ++i){
		printf("Details for Student number %d:", i+1);
		printf("\nEnter the name: ");
		gets(s[i].name);
		printf("Enter the roll number: ");
		scanf("%d", &s[i].roll);
		scanf("%c", &t); // This scanf is used intentionally to fix buffer error.
		printf("Enter the address: ");
		gets(s[i].address);
		printf("Enter the birth year, month and day separated by space: ");
		scanf("%d%d%d", &s[i].date.year, &s[i].date.month, &s[i].date.day);
		printf("Enter the marks of five subjects: ");
		scanf("%d%d%d%d%d", &s[i].m.marks[0], &s[i].m.marks[1], &s[i].m.marks[2], &s[i].m.marks[3], &s[i].m.marks[4]);
		scanf("%c", &t); // This scanf is used intentionally to fix buffer error.
	
		printf("\n\n");	
	}
	
	for(int i = 0; i<10; ++i){
		int temp = 0, total = 0, average = 0;
		printf("\nDetails of the student number %d: ", i+1);
		printf("\nName: %s", s[i].name);
		printf("\nRoll Number: %d", s[i].roll);
		printf("\nAddress: %s", s[i].address);
		printf("\nBirth Date in Year/Month/Date format: %d/%d/%d", s[i].date.year, s[i].date.month, s[i].date.day);
		
		for(int j = 0; j<5; ++j){
			temp = s[i].m.marks[j];
			total = temp + total;	
		}
		average = total/5;
		printf("\nTotal Marks: %d", total);
		printf("\nAverage Marks: %d", average);
		printf("\n\n");
	}
	return 0;
}
