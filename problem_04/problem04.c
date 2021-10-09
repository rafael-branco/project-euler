#include <stdio.h>

int largest_palindrome_product();

int main(){
	
	int max = largest_palindrome_product();
	
	printf("%d", max);
	
	return 0;
}

int largest_palindrome_product(){
	int i, j, k, temp, length, max = 0;
	char snum[7];
	for(i = 100; i < 999; i++){
		for(j = 100; j < 999; j++){
			temp = i * j;
			itoa(temp, snum, 10);
			length = strlen(snum);
			char tempStr[length];
			int count = 0;
			for(k = 0; k < length; k++){
				if(snum[k] == snum[length - 1 - k]){
					count++;
				}
			}
			
			if(count == length){
				if(temp > max){
					max = temp;
				}
			}
			
			
			
		}
	}
	return max;
}
