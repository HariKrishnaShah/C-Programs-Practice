#include <stdio.h>
#include <string.h>

int main(){
	
	union fruits{
		char color[100];
		int avg_w;
		
	};
	
	union fruits apple;
	strcpy(apple.color, "Red");
	printf("The color is %s.", apple.color);
	apple.avg_w = 25;	
	printf("\nThe average weight is %d grams.", apple.avg_w);
	printf("\nThe size of the union is %d.", sizeof(fruits));

	return 0;
}
