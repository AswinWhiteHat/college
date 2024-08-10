#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
   int i, n, sum = 0;   
   clrscr() ;
      if(argc == 1)
{
        printf("Please provide command line arguments!!!");
        return 0;
   }
   else
{
        printf("Total number of arguments are - %d and sum of those is ", argc);
        for(i=0; i<argc ; i++){
            n = atoi(argv[i]);
            sum += n;
        }
        printf("%d\n", sum);
        return 0;
   }
}
