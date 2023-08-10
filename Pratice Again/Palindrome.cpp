#include <stdio.h>
#include <string.h>
//Coded by Hari Shah

int isPalindrome(char s1[100]){
	char s2[100], s3[100];
strcpy(s3, s1);
	strlwr(s3);	
	strcpy(s2, s1);
	strlwr(s2);
	strrev(s2);	
	
if(strcmp(s3,s2)==0){
		printf("True");
		return 1;
	}
	else{
		printf("False");
		return 0;
	}	
	
	
}

int main(){
	char s1[100], s2[100], s3[100];
	printf("Please enter a string: ");
	gets(s1);
	
	
	isPalindrome(s1);
	
	
	return 0;
}

