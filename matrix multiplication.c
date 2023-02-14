#include<stdio.h>
int main()
{
	int m,n,num;
	printf("Enter the number for table");
	scanf("%d",&num);
	for(m=1;m<=10;m++)
	{
		n=m*num;
		printf("%d*%d=%d \n",num,m,n);
	}
	return 0;
}
