#include <stdio.h>
// VIT ID: 21BCS0167

int main(){
	int ArrSize, search;
	printf("Enter the number of data to put into array: ");
	scanf("%d", &ArrSize);
	int array[ArrSize];	
	printf("Enter the values to put into the array: ");
	for(int i = 0; i<ArrSize; i++){
	 scanf("%d", &array[i]);
	}
	
	printf("Enter the number to search: ");
	scanf("%d", &search);
	
	for(int i = 0; i<ArrSize; i++){
		if(array[i]==search){
			printf("The number %d is at index %d in the array.\n", search, i);
		}
	}
	return 0;
	
}
