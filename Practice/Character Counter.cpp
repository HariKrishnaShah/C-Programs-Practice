#include <stdio.h>
#include <string.h>


int main(){
	char s1[50];
	char ch;
	int le, count;
	printf("Enter a string: ");
	gets(s1);
	le = strlen(s1);
	printf("Enter a character to search: ");
	scanf("%c", &ch);
	count = 0;
	//Hari welcomes you all.
	
	
	
	for(int i = 0; i<le; ++i){
		if(s1[i]==ch){
			count = count+1;
			printf("\nThe character %c is available at index %d.",ch, i);
		}
	}
	printf("\nThe frequency of character %c in the string is %d.", ch, count);
	
	
	return 0;
}
