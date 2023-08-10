#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int a, b,c, largest;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	largest = a>b?(a>c?a:c):(b>c?b:c);
	printf("The largest number among %d, %d, %d is %d.", a, b, c, largest);
	return 0;
}
