#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[10],i,sum=0;
	float avg=0;
	printf("Enter array elements\n");
	for(i=0;i<10;i++)
	    scanf("%d",&a[i]); //10 20 30 40 ....
	for(i=0;i<10;i++)
	    sum=sum+a[i]; //0+10, 10+20, 30+30,
	avg=sum/10;
	printf("Avg=%f",avg);
}
