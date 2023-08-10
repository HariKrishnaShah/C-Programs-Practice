#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("Hari.txt", "w");
	
	char ca;
	while((ca = getchar())!= EOF){
		fputc(ca, fp);
	}
	
	fclose(fp);
	
	fp = fopen("Hari.txt", "r");
	
	while((ca = fgetc(fp)) != EOF){
		printf("%c", ca);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
