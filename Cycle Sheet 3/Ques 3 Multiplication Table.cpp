#include <stdio.h>
//VIT ID: 21BCS0167

void multiplication(int n, int c){
	for(int i = 1; i<=c; i++){
		int multi;
		multi = n*i;
		printf("%d x %d = %d\n", n, i, multi);
	}
}

int main(){
	int num, count;
	printf("Enter the number to print its multiplication table: ");
	scanf("%d", &num);
	printf("Enter the count upto which you want to print the table: ");
	scanf("%d", &count);
	multiplication(num, count);
	return 0;
}
