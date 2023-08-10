#include <stdio.h>

void count_zeros(int matrix[10][10], int row, int column){
	int count = 0;
	for(int i = 0; i<row; ++i){
		for(int j = 0; j<column; ++j){
			if(matrix[i][j]==0){
				count = count +1;
			}
		}
	}
	
	printf("\nThe number of zeros in the matrix is %d.", count);		
}
int main(){
	int matrix[10][10], row, column;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);
	
	printf("\nEnter the element: ");
	for(int i = 0; i<row; ++i){
		for(int j = 0; j<column; ++j){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	count_zeros(matrix, row, column);
	return 0;
}
