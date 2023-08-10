#include <stdio.h>
#include <string.h>


int main(){
	
	struct student{
		char name[100];
		char regno[100];
		int marks[5];
		int total;
	};
	
	struct student s[5];
	
	for(int i = 0; i<5; ++i){
		char temp;
		printf("Please enter the details for the student number %d.", i+1);
		printf("\nEnter the student name: ");
		gets(s[i].name);
		printf("Enter the register number: ");
		gets(s[i].regno);
		for(int j = 0; j<5; ++j){
			printf("Enter the marks of subject number %d: ", j+1);
			scanf("%d", &s[i].marks[j]);
		}
		scanf("%c", &temp); // This input has been created to fix the buffer error.
		int temp_total = 0;
		for(int z = 0; z<5; ++z){
			temp_total = temp_total + s[i].marks[z];
		}
		s[i].total = temp_total;
		printf("\n");
	}
	
	for(int i = 0; i<5; ++i){
		printf("\n\nThe detail of student number %d is given below.", i+1);
		printf("\nStudent name: %s", s[i].name);
		printf("\nStudent id: %s", s[i].regno);
		printf("\nThe total marks is %d.", s[i].total);
		for(int j = 0; j<5; ++j){
			printf("\nThe marks of subject %d is %d.", j+1, s[i].marks[j]);		
		}
	
		
		
	}	
	return 0;
}
