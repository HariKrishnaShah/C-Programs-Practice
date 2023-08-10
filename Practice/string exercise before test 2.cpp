#include <stdio.h>
#include <string.h>


int main(){
	char id[100], name[100];
	int len, len2;
	
	strcpy(id, "21BCS0167");
	strcpy(name, "Hari Krishna Shah ");
	
	strcat(name, id);
	len = strlen(name);
	printf("The concated string is %s.", name);
	printf("\nThe length of the concated string is %d.", len);
	strrev(name);
	len2 = strlen(name);
	printf("\nThe reversed string is %s and its length is %d.", name, len2);
	strupr(name);
	printf("\nThe string in uppercase is %s.", name);
	
	
	
	
	
	
	
	return 0;
}
