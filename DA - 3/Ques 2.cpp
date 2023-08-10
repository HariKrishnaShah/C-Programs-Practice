#include <stdio.h>
#include <string.h>


int main(){
	
	struct student{
		char name[20];
		int roll;
		char address[40];
	};
	
	union stud{
		char name[20];
		int roll;
		char address[40];
	};
	
	struct student s;
	union stud u;
	
	strcpy(s.name, "Hari Krishna Shah");
	s.roll = 1;
	strcpy(s.address, "Nepal");
	
	strcpy(u.name, "Hari Krishna Shah");
	u.roll = 1;
	strcpy(u.address, "Nepal");

	printf("The size of student structure is %d.", sizeof(student));
	printf("\nThe size of stud union is %d.", sizeof(stud));
	printf("\nThe memory address of structure student s' name, roll number and address is %d, %d, %d respectively.", &s.name, &s.roll, &s.address);
	printf("\nThe memory address of union stud's name, roll number and address is %d, %d, %d respectively.", &u.name, &u.roll, &u.address);
	
	printf("Details of object of structure student  s is: \
	\nName: %s \
	\nRoll number: %d\
	\nAddress: %s", s.name, s.roll, s.address);
	
	printf("\n\nDetails of object of union stud u is: \
	\nName: %s \
	\nRoll number: %d\
	\nAddress: %s", u.name, u.roll, u.address);
	
	return 0;
}
