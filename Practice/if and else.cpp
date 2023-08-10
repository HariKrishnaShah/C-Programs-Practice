#include <stdio.h>
#include <string.h>


int main(){
	char s1[50];
	char ch;
	int le, count, precount;
	printf("Enter a string: ");
	gets(s1);
	le = strlen(s1);
	printf("Enter a character to search: ");
	scanf("%c", &ch);
	count = 0;
	precount = 0;
	//Hari welcomes you all.
	
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
