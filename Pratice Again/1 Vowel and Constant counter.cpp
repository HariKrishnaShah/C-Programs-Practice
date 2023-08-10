#include <stdio.h>
#include <string.h>
//Coded by Hari Shah

int main(){
	char s1[100],s[100];
	int countv = 0,countc = 0;
	int length ;
	printf("Please enter a string: ");
	gets(s1);
	length = strlen(s1);
	strcpy(s, s1);
	strlwr(s);

	for(int i = 0; i<length; ++i){
		if(s[i] != ' '){
			if((s[i]== 'a') || (s[i]=='e')  || (s[i]=='i')  || (s[i]=='o')  || (s[i]=='u')){
			countv = countv + 1;	
			} 
			else{
			countc = countc + 1;
			}
			
		}
		
	}
	
	printf("\nThe number of vowel and consonant in the string is %d and %d respectively.", countv, countc);
	
	return 0;
}
