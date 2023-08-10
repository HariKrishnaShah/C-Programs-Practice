#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Coded by Hari Shah
int main(){
	char s1[50], s[50];
	char ch1,ch;
	int le, count, precount,decide;
	printf("Enter a string: ");
	gets(s);
	le = strlen(s);
	printf("Enter a character to search: ");
	scanf("%c", &ch);
	count = 0;
	precount = 0;
	strcpy(s1,s);
	printf("Do you want the checking to be case sensitive?\nPlease 1 for case sensitive or 0 to be insensitive: ");
	scanf("%d", &decide);
	
	if(decide==0){
		ch = tolower(ch);
		strlwr(s1);
	}
	for(int i = 0; i<le; ++i){
		if(s1[i]==ch){
			precount = precount+1;		
		}
	}
	if(precount>0){
			printf("\nThe character %c is available at index ",ch);
	
	for(int i = 0; i<le; ++i){
		if(s1[i]==ch){
			count = count+1;
			if(count<precount){
				printf("%d, ", i);
			}
			else{
				printf("%d.", i);
			}
		}	
	}
	printf("\nThe frequency of character %c in the string is %d.", ch, count);
	
	}
	else{
		printf("The character %c is not present in the string.", ch);
	}
	return 0;
}
