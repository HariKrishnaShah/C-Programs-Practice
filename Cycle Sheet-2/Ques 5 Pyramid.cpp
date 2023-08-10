#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int row;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	for(int i = row; i>0; i--){
		for(int j = i; j>0; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
