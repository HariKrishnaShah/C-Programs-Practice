#include <stdio.h>



int main(){
	int sum;
	for(int r = 1; r<=3;){
		for(int c = 1; c<=2;){
			sum = r+c;
			printf("r = %d  c = %d  sum = %d\n", r, c, sum);
			++c;
		}
		++r;
	}
	
	return 0;
}
