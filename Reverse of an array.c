#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10],i;
	printf("Enter array elements\n");
	for(i=0; i<10; i++)  //0 1 2 3 4 5 6 7 8 9
	scanf("%d",&a[i]);
	printf("Reverse of Array\n");
	for(i=9; i>=0; i--) //9 8 7 6 5 4 3 2 1 0
	printf("%d\n",a[i]);
}
