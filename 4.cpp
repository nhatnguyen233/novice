#include<stdio.h>
#include<conio.h>

int main(){
	
	int a[10]={1, 5, 6, 1, 3, 4, 9, 6, 10,2};
	int n=1;
	for (int i=0; i<9;i++){
		int t=a[i], j;
		printf("day %d: %d",n,t);
		for (int j=i+1;j<10;j++){
			if(t<=a[j])
			{
			
				t=a[j];
				printf("%d",t);
		
			}
			
			else
			break;
	}
	i=j;
	n++;
	printf("\n");
	
	getch();
	return 0;
	
}
}
