#include <stdio.h>
#include <conio.h>
using namespace std;


int factorial(int num){
    int factorial;
    factorial = 1;
    for(int i = 1; i<=num; i++){
        factorial = factorial*i;
    }
    printf("\n The factorial of %d is %d ", num, factorial);
    return 0;
    
}

int main(){
	factorial(6);
	return 0;
}



