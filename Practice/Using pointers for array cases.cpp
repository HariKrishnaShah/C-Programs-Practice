#include <stdio.h>

void read(int *a);
int main(){
	int arr[5] = {0,1,2,3,4};
	
	read(arr);
	
	printf("\n\nValue returned by Main\n");
	for(int i = 0; i<5; ++i){	
		printf("The value of arr at index %d is %d.\n", i, arr[i]);
	}
	
	
	return 0;
}


void read(int *a){
	int *b;
	
	b = a; //copying the base address of the array in another integer pointer.
	
	printf("Value returned by read\n");
	for(int i = 0; i<5; ++i){
		printf("The value of arr at index %d is %d.\n", i, *b );
		b = b + 1;  // Increasing the pointing address of the pointer from the base address of array to the next array elements.
	}
	
	b = a;
	
	for(int j = 0; j<5; ++j){
		*b = *b+10;
		b = b + 1;
	}
	
	
	
	
	
}
