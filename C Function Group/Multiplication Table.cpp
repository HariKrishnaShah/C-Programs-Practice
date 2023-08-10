#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int num;
	printf("Enter a number to show it's multiplication table: ");
	scanf("%d", &num);
	

	for(int i=1; i<=10; i++){
		printf("%d x %d is %d\n", num, i, num*i );
		
	}
	return 0;
}
