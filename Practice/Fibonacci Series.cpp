#include <stdio.h>

int main(){
	int n, a, b, c, i;
	n = 100;
	
	a = 0;
	b = 1;
	
	for(int i = 3; i<n; ++i){
		c = a+b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	
	
}
