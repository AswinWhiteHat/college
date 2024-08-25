#include <stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
           clrscr();
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
printf(“The address of %d = %p\n”,num1,ptr1);
printf(“The address of %d = %p\n”,num2,ptr2);
 printf("Sum of %d and %d  = %d",num1,num2, sum);
   getch();
    return 0;
}
