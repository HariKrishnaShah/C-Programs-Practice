#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;


int main(){
	int number, temp, tempp, len, rem, check;
	len = 0;
	check = 0;
	printf("Please Enter a number to check whether it is Armstrong: ");
	scanf("%d", &number);
	
	temp = number;
	while(temp != 0){
		temp = temp/10;
		len = len+1;
	}
    
    tempp = number;
    printf("The length of number is %d\n", len);
    while(tempp != 0){
        rem = tempp%10;
        check = check+pow(rem,len);
        tempp = tempp/10;
    }
    if(check == number){
        printf("The number %d is an armstrong number.\n", number);
    }
    else{
        printf("The number %d is not an armstrong number.\n", number);
    }
	
	
	return 0;
}
