#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	char app[50],ball[50];
	printf("Enter the string app and ball");
	gets(app);
	gets(ball);
	if(strcmp(app,ball) == 0){
		printf("The string is equal");
	}
	else{
		printf("The string is not equal");
	}
	
	printf("\n%s", app);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
