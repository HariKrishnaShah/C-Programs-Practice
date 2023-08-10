#include <stdio.h>
#include <string.h>


int main(){
	
	struct s{
		char name[15];
	};
	
	struct s p[2];
	
	for(int i = 0; i<2; ++i){
		printf("Enter the name: ");
		gets(p[i].name);
	}
	
	for(int i = 0; i<2; ++i){
		printf("The name is %s\n.", p[i].name);
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
