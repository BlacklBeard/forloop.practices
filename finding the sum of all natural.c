#include <stdio.h>

int main(){
	
	int arr[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	int sum = 0;
	
	printf("the first 10 natural numbers are ");
	
	
	for (i = 0; i <= 9; i++){
		printf("\n%d ", arr[i]);
		
		sum = sum + arr[i];
			
	}
	printf("\n\nthe sum is %d ", sum);
	return 0;
}
