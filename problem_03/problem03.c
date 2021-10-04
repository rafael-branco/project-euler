#include <stdio.h>
#include <math.h>

int isPrime(long long int);

int main(){
	
	long long int n = 600851475143;
	long long int i;
	
	for(i = sqrt(n - 1) ; i > 1; --i){
		if(n % i == 0){
			if(isPrime(i)){
				printf("%d ", i);
				break;
			}	
		}
	}
	
	return 0;
}


int isPrime(long long int n){
	
	long long int i;
	int flag = 0;
	
	for(i = 2; i <= sqrt(n); ++i){
		if(n % i == 0){
			return 0;
		}
	}
	
	return 1;
}
