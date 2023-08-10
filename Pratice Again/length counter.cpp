#include <stdio.h>
//Coded by Hari Shah


int main(){
	char s[50];
	int length=0, i = 0, count = 0;
	printf("Please enter a string: ");
	gets(s);
	
	while(s[i] != '\0'){
		++length;	
		if(s[i] !=' '){
			++count;
		}
		++i;
	}
	
	printf("The length of the string is %d including whitespaces.", length);
	printf("\nThere are %d number of characters excluding whitespaces.", count);
	
	
	return 0;
}
