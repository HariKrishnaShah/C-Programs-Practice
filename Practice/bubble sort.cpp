#include <stdio.h>

void sort(int arr[100], int size){
	int temp;
	for(int i = 0; i<size; ++i){
		for(int j = i+1; j<size; ++j){
			if(arr[j]<arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	
}



int main(){
	int arr[100], size;
	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	printf("Enter the elements of the array: ");
	
	for(int i = 0; i<size; ++i){
		scanf("%d", &arr[i]);
	}
	
	sort(arr, size);
	
	printf("\nThe sorted array is \n");
	for(int i = 0; i<size; ++i){
		printf("%d ", arr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
