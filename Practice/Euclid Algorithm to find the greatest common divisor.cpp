#include <stdio.h>
//Coded By Hari Krishna Shah

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
	int a, b;
	printf("Enter the value of the first number: ");
	scanf("%d", &a);
	printf("Enter the value of the second number: ");
	scanf("%d", &b);
    
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
