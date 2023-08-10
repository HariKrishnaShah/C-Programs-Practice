#include <stdio.h>
//VIT ID: 21BCS0167
int facto(int n){
	int f, i;
	f = 1;
	if(n == 0){
		f = 1;
	}
	else{
	
	for(i = 1; i<=n; i++){
		f = f*i;
	}
}
	return f;
}

int main(){
	int num, factorial;
	printf("Enter the number to find the factorial of: ");
	scanf("%d", &num);
	factorial = facto(num);
	printf("The factorial of %d is %d.", num, factorial);
	return 0;
}


