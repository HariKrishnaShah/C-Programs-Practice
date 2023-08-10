#include <stdio.h>


int main(){
	
	int matrix[100][100];
	long long int r, c, product;
	printf("Please enter the number of rows and columns of the matrix: ");
	scanf("%lld%lld", &r, &c);
	
	product = 1;
	
	printf("Please enter the matrix elements: ");
	
	for(int i = 0; i<r; ++i){
		for(int j = 0; j<c; ++j){
			scanf("%lld", &matrix[i][j]);
		}
		
	}
	
	for(int i = 0; i<r; ++i){
		for(int j = 0; j<c; ++j){
			product = product * matrix[i][j];
		}
		
	}
	
	printf("The product of the elements of the matrix is %lld.", product);
	
	
	
	
	
	
	
	return 0;
}
