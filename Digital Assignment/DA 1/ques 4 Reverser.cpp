#include <stdio.h>
#include <conio.h>
#include <math.h>

//VIT number:21BCS0167
int main()
{
	int num, reverse, rem, temp, len;
	reverse = 0;
	len = 0;
	printf("Please enter a three digit number: ");
	scanf("%d", &num);
	temp = num;
	while(temp !=0){
		temp = temp/10;
		len = len +1;
	}
	printf("The number of digits in the number %d is %d.", num, len);
	temp = num;
	while(temp != 0)
	{
		rem = temp %10;
		reverse = reverse * 10 + rem;
		temp = temp/10;
	}
	printf("\nThe reverse of number %d is %d.", num, reverse);
	return 0;
}
