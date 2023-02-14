#include<stdio.h>
int main ()
{
	int size,i,a[10],count=0;
	printf("Enter the size of an array ");
	scanf("%d",&size);
	printf("Enter the Values of an array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("The Negative Values are %d ",count);
	return 0;
}
