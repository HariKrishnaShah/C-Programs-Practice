#include <stdio.h>

void modify(int a[2]);
int main(){
	int ar[2] = {5,6};
	
	modify(ar);
	
	printf("\nThe value at index 1 after calling modify function is %d.", ar[0]);
	printf("\nThe value at index 1 after calling modify function is %d.", ar[1]);
	printf("\nThe value at index 99 after calling modify function is %d.", ar[99]);
	
	return 0;
}

void modify(int b[99]){
	b[99] = 12;
	printf("\nThe value of b is %d.", b[99]);
}
