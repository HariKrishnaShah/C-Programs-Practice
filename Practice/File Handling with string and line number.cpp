#include <stdio.h>


int main(){
	int num, ln;
	char line[2000], temp;
	FILE *fp;
	fp = fopen("rr.txt", "w");
	char read[2000];
	
	printf("Enter the number of lines to print to the file: ");
	scanf("%d", &num);
	scanf("%c", &temp);
	
	for(int i = 0; i<num; ++i){
		printf("Enter the string for line number %d: ", i+1);
		gets(line);
		fprintf(fp, "%s\n", line);
	}
	fclose(fp);
	
	fp = fopen("rr.txt", "r");
	
	printf("Enter a line number to print: ");
	scanf("%d", &ln);
	
	for(int j = 1; j<=ln; ++j){
		fscanf(fp, "%s", read);
	}
	printf("\nThe value stored in the line number %d is \n%s", ln, read);
	
	fclose(fp);
	return 0;
}
