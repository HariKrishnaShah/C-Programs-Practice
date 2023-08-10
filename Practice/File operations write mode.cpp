#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("Hari.txt", "w");
	
	char ca;
	while((ca = getchar())!= EOF){
		putc(ca, fp);
	}
	
	fclose(fp);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
