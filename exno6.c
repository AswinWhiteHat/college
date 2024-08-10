#include<stdio.h>
void fibo(int);
void main() 
{
   int n;    
   printf("Enter a number: \n");
   scanf("%d",&n);
   fibo(n);
}
void fibo(int n)
{
   int i, a=0,b=1;
   printf("%d %d ", a,b);
      for(i=3;i<=n;i++)
   {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}
