#include <stdio.h>

int isPrime(long long int n){
	long long int i;
	long long int count = 0;
	
	for(i = 2; i <= n / 2; ++i){
		if(n % i == 0){ 
			count = 1;
		}
	}
	
	if(count == 1){
		return 0;
	}else{
		return 1;
	}
}


int main(){
	
	long long int n = 600851475143;
	long long int i;
	//n = 13195;
	
	for(i = n - 1; i >= 1; i--){
		if(isPrime(i) && n % i == 0){
			printf("%d ", i);
			break;
		}
	}
	
		
	
	return 0;
}
