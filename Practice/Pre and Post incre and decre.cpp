#include <stdio.h>

int main(){

int a, b, x;
		a = 5;
		b = 6;
		printf("%d", a++);
		printf("\n%d", a);
		
		x = a++;
		printf("\n%d", x);
		printf("\n%d", a);
		return 0;
}
