#include <stdio.h>


int main(){
	
	FILE *fp;
	
	char name[1000];
	int age;
	char address[1000];
	
	char read1[1000];
	int read2;
	char read3[1000];
	
	fp = fopen("file.txt", "w");
	
	printf("Enter your name: ");
	scanf("%s", &name);
	fprintf(fp, "Name: %s\n", name);	
	printf("Enter your age: ");
	scanf("%d", &age);
	fprintf(fp, "Age: %d\n", age);
	printf("Enter your address: ");
	scanf("%s", &address);
	fprintf(fp, "Address: %s\n", address);
	
	fclose(fp);
	
	fp = fopen("file.txt", "r");
	
	printf("\nReadings");
	fscanf(fp, "Name: %s\n", &read1);
	printf("\nThe name is %s.", read1);
	fscanf(fp, "Age: %d\n", &read2);
	printf("\nThe age is %d.", read2);
	fscanf(fp, "Address: %s\n", &read3);
	printf("\nThe address is %s.", read3);
	
	fclose(fp);
	
	
	
	
	
	return 0;
}
