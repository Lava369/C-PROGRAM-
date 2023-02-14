#include<stdio.h>
int main()
{
int i,j,row;
printf("enter the number of rows :");
scanf("%d",&row);
for(i=0;i<row+1;++i)
{
for(j=0;j<i;++j)
{
printf("*");
}
printf("\n");
}
return 0;
}

