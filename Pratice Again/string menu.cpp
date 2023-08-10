#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Coded by Hari Shah

int main(){
	char s1[100], s2[100];
	int sel, len1, len2;
	printf("Please enter the first string: ");
	gets(s1);
	printf("Please enter the second string: ");
	gets(s2);
	
	printf("Please enter a number to do a function.\nHere's the Menu: \n \
			Enter 1 to calculate the length of string: \n \
			Enter 2 to reverse a string: \n \
			Enter 3 to join the strings \n \
			Enter 4 to copy one string to another \n \
			Enter 5 to compare the strings \n \
			Enter 6 to convert the strings to lowercase and uppercase\n");
	
	scanf("%d", &sel);
	
	switch(sel){
			case 1:
				len1 = strlen(s1);
				len2 = strlen(s2);
				printf("The length of string1 and string2 are %d and %d respectively.", len1, len2);
				break;
			
			case 2:
				strrev(s1);
				strrev(s2);
				printf("The reverse of string1 and string2 are %s and %s respectively.", s1, s2);
				break;
			case 3:
				strcat(s1,s2);
				printf("The concated string is %s.", s1);
				break;
			case 4:
				strcpy(s1,s2);
				printf("The string2 was copied to String1 and result string is %s.", s1);
				break;
			case 5:
				if(strcmp(s1,s2)==0){
					printf("The strings are equal");
				}
				else{
					printf("The strings are not equal");
				}
				break;
			case 6:
					printf("\nThe string 1 lowercase will be %s.", strlwr(s1));	
					printf("\nThe string 1 uppercase will be %s.", strupr(s1));
					printf("\nThe string 2 lowercase will be %s.", strlwr(s2));
					printf("\nThe string 2 uppercase will be %s.", strupr(s2));												
	
	}
	return 0;
}
