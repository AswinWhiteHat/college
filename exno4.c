#include <stdio.h>
 #include<conio.h>
int main()
{
    int size, i, large;
 clrscr();
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];  //Declaring array
     //Input array elements
     printf("\n Enter %d elements of the array: \n", size);
     for (i = 0; i < size; i++)
    {   
        scanf(" %d", &array[i]);
    }
      //Declaring Largest element as the first element
    large = array[0];
     for (i = 1; i < size; i++) 
    {
        if (large < array[i])
        large = array[i];
    }
