#include <stdio.h>


// If else co ban
int main(){
	
	int a[] = {0,10,20,30,40};
	int c = 10;
	int* b;
	
	b = &a[0];
	
	*(b + 1) = 1000;
	
	printf("b: %d va b + 1: %d", b, b + 1);
	
	return 1;
}



