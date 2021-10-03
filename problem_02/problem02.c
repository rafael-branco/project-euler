#include <stdio.h>

int main(){
	
	long long int a = 1, b = 2, c = 0;
	long long int i = 0;
	long long int n = 10;
	long long int sum = 2;
	
	//printf("%d %d ", a, b);
	
	while(c < 4000000){
		
		c = a + b;
		a = b;
		b = c;
		//printf("%d ", c);
		if(c % 2 == 0 && c < 4000000){
			sum += c;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
