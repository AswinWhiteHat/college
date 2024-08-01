#include<stdio.h>  
#include<conio.h>
#include <string.h>    
int main()
{    
char str[20]={'p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'n', 'c', '\0'};   
char str1[20];    
clrscr( );
   printf("Length of string is: %zu",strlen(str));    
   strcpy(str1,str);    
   printf("Value of Copied string is: %s",str1);    
   char dest[50] = "This is an";     
    printf(" Before concatenation: %s\n", dest);    
    strcat(dest, str); 
    printf("After concatenation: %s", dest); 
  printf("Enter 1st string: ");    
  scanf("%s",str);//reads string from console    
  printf("Enter 2nd string: ");    
  scanf("%s",str1);    
if(strcmp(str,str1)==0)    
      printf("Strings are equal");    
  else    
      printf("Strings are not equal");    
printf("\n Entered string %s",str);
printf("\nReverse String is: %s",strrev(str));    
printf("\nLower String is: %s",strlwr(str));    
printf("\nUpper String is: %s",strupr(str));  
getch();
return 0;    
}    
