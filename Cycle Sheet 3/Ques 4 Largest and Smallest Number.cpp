#include <stdio.h>
// VIT ID: 21BCS0167
int main(){
	int arr[100], max, num, min;
	printf("Enter the number of data to put in the array: ");
	scanf("%d", &num);
	printf("Enter the numbers to put in the array: ");
	for(int i = 0; i<num; ++i)
	{
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	for(int i = 0; i<num; ++i)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	
	printf("The largest number is %d and the smallest number is %d in the given array.", max, min);
	
	return 0;
}
