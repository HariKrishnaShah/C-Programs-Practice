#include <stdio.h>

int main(){
	int arr[100], min, num;
	printf("Enter the number of data to put in the array: ");
	scanf("%d", &num);
	
	printf("Enter the numbers to put in the array: ");
	for(int i = 0; i<num; ++i){
		scanf("%d", &arr[i]);
	}
	
	min = arr[0];
	for(int i = 0; i<num; ++i){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	
	printf("The smallest number in the array is %d.", min);
	
	return 0;
}
