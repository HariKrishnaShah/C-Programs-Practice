#include <stdio.h>

int main(){
	int arr[100], max, num;
	printf("Enter the number of data to put in the array: ");
	scanf("%d", &num);
	
	printf("Enter the numbers to put in the array: ");
	for(int i = 0; i<num; ++i){
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	for(int i = 0; i<num; ++i){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	
	printf("The largest number in the array is %d.", max);
	
	return 0;
}
