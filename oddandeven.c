#include<stdio.h>
int main()
{
   int m,n,i;
   printf("Enter the value of m and n:\n");
   scanf("%d%d",&m,&n);
   int odd_count=0,even_count=0;
   printf("All Odd Numbers = ");
   for(i=m+1;i<n;i++)
   {
       if(i%2==0)
       {
           printf("%d ",i);
           even_count++;
       }
       else
       {
           printf("%d ",i);
           odd_count++;
       }
   }
   printf("\nAll Even Numbers = ");
   for(i=m+1;i<n;i++)
   {
       if(i%2==0)
       {
           printf("%d ",i);
       }
   }
   printf("\nNumber of Odd numbers = %d",odd_count);
   printf("\nNumber of Even numbers = %d",even_count);
   return 0;
}
