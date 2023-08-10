#include <stdio.h>

void modify(int a[2]);
int main(){
	int ar[2] = {5,6};
	
	modify(ar);
	
	printf("\nThe value at index 1 after calling modify function is %d.", ar[1]);
	
	return 0;
}

void modify(int a[2]){
	a[1] = 15;
	
	
	
	
	

}
