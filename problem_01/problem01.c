#include <stdio.h>

int main(){
	
	int n = 1000;
	int i, sum = 0;
	printf("Numbers: ");
	for(i = n - 1; i > 0; i--){
		if(i % 3 == 0 || i % 5 == 0){
			sum += i;
			printf("%d ", i);
		}
		
	}
	
	printf("\nSum = %d", sum);
	
	return 0;
}
