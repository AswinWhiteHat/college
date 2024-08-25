#include <stdio.h>
#include<conio.h>
int factorial(int i)
{
 if(i <= 1)
  return 1;
else
 return i * factorial(i - 1);
}
void main()
{
 int n,fact;
clrscr();
printf(“Enter the number to find factorial\n”);
scanf(“%d”,&n);
fact= factorial(n);
printf("Factorial of %d =  %d",n, fact);
getch();
}
