#include <stdio.h>
int main (){
int m1,m2,m3,tot;float avg;
char g;
tot=0;
printf("Enter the input values of 3 marks\n");
scanf("%d%d%d",&m1,&m2,&m3);
tot=m1+m2+m3;
printf("Total mark obtained=%d\n",tot);
avg=tot/3;
printf("Average obtained=%f\n",avg);
if(avg>=90)
{
    g='O';
}
else if(avg>=80 && avg<90)
{
    g='A';
}

else if(avg>=70 && avg<80)
{
    g='B';
}
else if(avg>=60 && avg<70)
{
    g='C';
}
else if(avg>=50 && avg<60)
{
    g='D';
}
else
{
    g='E';
}
printf("Grade of a student= %c",g);
  return 0;
}
