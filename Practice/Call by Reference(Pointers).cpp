#include <stdio.h>
int swapr(int *x, int *y);
int main(){
	int a = 10, b = 20;
	swapr(&a, &b);
	printf("\n a = %d b = %d", a, b);
}

swapr(int *x, int *y ){
	int t;
	t = *x;
	*x = *y;
	*y = t;
	
	return 0;
}

