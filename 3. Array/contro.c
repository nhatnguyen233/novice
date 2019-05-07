#include <stdio.h>



int main(){
	
	
	int a = 3;
	int *b = &a;
	
	a = 10;
	
	int aa[] = {1,2,3,4,5,6};
	int *bb = aa;
	
	int aaa[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	
	int aaaa[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

	printf("%d", aaaa[1][0][1]);
	printf("\n");
	printf("%d", *(*(*(aaaa + 1) + 0) + 1));

//	printf("%d", aaa);
//	printf("\n");
//	printf("%d", aaa[1][0]);
//	printf("\n");
//	printf("%d", aaa[2]);
//	printf("\n");
//	printf("%d", aaa[3]);

	return 1;
}
