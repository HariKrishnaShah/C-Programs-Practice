#include <stdio.h>

int main(){
	char read[5000];
	FILE *fp;
	fp = fopen("Hari.txt", "r");
	printf("The texts in the file is:");
	while(fscanf(fp, "%s",  read) != EOF){
		printf("\n%s", read);
	}
	
	fclose(fp);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
