#include <stdio.h>

void trans(int matr[50][50], int rows, int col){
	int tran[50][50];
	for(int i = 0; i<rows; ++i){
		for(int j = 0; j<col; ++j){
			tran[j][i] = matr[i][j];
		}
	}
	
	for(int i = 0; i<rows; ++i){
		for(int j = 0; j<col; ++j){
			printf("%d ", tran[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int rows, col;
	printf("Welcome to the matrix transpose");
	printf("\nPlease enter the number of rows: ");
	scanf("%d", &rows);
	printf("Please Enter the number of columns: ");
	scanf("%d", &col);
	
	int matr[50][50];
	printf("Please enter the elements of the matrix: ");
	
	
	
	for(int i = 0; i<rows; ++i){
		for(int j = 0; j<col; ++j){
			scanf("%d", &matr[i][j]);
		}
	}		
	trans(matr, rows, col);

	return 0;
}
