 #include<stdio.h>
int main()
{
	int x,n,c;
	printf("1=Add,2=sub,3=Div,4=Mul\n");
	printf("Enter two numbers\n");
	scanf("%d%d",&x,&n);
	
	printf("Select Your Choice");
	scanf("%d",&c);
	switch (c)
	{
	case 1:printf("the addition of %d+%d is %d",x,n,x+n);
	case 2:printf("the subtraction of %d-%d is %d",x,n,x-n);
	case 3:printf("the division of %d/%d is %d",x,n,x/n);
	case 4:printf("the multiplication of %d*%d is %d",x,n,x*n);
	default:
		printf("Enter your number");
	}
	return 0;
}
