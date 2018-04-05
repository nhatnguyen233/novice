#include<stdio.h>
#include<conio.h>

int main()
{
int a[10]= {1, 5, 6, 1, 3, 4, 9, 6, 10, 2};
int d=1,k=0;
while (k<10){
printf("Day %d: %d ",d,a[k]);
for (;k<9;k++) {
if (a[k]<=a[k+1])
printf("%d ",a[k+1]);
else break;
}
printf("\n");
k++;
d++;
}
return 0;
}
