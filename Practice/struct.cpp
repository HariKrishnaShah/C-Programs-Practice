#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	struct Person{
	 char name[100];
		int salary;
		int number;
		char addr[100];
		
	};
	
	struct Person p1, p4;
	printf("Enter the name: ");
	scanf("%s", &p1.name);
	p1.salary = 5000;
	p1.number = 9844;
	strcpy(p1.addr, "Sindhuli");
	
	struct Person p2 = { "Raghu", 1500, 9856, "Kathmandu"
	};
	
	p4 = p1;
	printf("The name of person is %s and his salaray is %d and his number is %d and his address is %s.", p1.name, p1.salary, p1.number, p1.addr);
	printf("\nThe name of person is %s and his salaray is %d and his number is %d and his address is %s.", p2.name, p2.salary, p2.number, p2.addr);
	printf("\nThe name of person is %s and his salaray is %d and his number is %d and his address is %s.", p4.name, p4.salary, p4.number, p4.addr);
	
	return 0;
}
