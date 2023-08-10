#include <stdio.h>
//VIT ID:21BCS0167


int main(){
	int p, c, b, m, cs, aver, total;
	char grade[50];
	printf("Enter the marks of physics, chemistry, biology, maths and computer science in the same order: ");
	scanf("%d%d%d%d%d", &p, &c, &b, &m, &cs);
	total = p + c + b + m + cs;
	aver = total/5;
	
	printf("The average marks scored is %d.", aver);
	if(aver>75){
		char grade[] = "Distiction";
	}
	else if(aver>60){
		char grade[] = "First Class";
	}
	else if(aver>50){
		char grade[50] = "Second Class";
	}
	else if(aver>35){
		char grade[50] = "Third Class";
	}
	else if(aver<35){
		char grade[50] = "Fail";
	}
	printf("\nThe obtained grade is %s.", grade);
	
	return 0;
}
