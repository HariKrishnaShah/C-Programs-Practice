#include <stdio.h>
#include <ctype.h>


int main(){
	char a = '*';
	if(!isalnum(a)){
		printf("The character is special character");
	}
	else{
		printf("The character is not special character");
	}
	
	
	
	return 0;
}


