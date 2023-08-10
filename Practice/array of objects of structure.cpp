#include <stdio.h>


int main(){
	
	struct pp{
		int score;
		
		
	};
	
	struct pp o[2];
	
	for(int i = 0; i<2; ++i){
			printf("Enter the score: ");
			scanf("%d", &o[i].score);
		
	}
	
	for(int i = 0; i<2; ++i){
		printf("The score is %d.\n", o[i].score);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
