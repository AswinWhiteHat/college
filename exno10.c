#include <stdio.h>
#include<conio.h>
struct student
{
 int rollno;
char name[25];
	union marks
{
int m1,m2,m3;
}m;
int tot;
}stud;
void main()
{
int x,y,z;
clrscr();
printf(“Enter name and rollno\n”);
scanf(“%s%d”,stud.name,stud.rollno);
printf(“Enter mark 1\n”);
scanf(“%d”,&stud.m.m1);
x=stud.m.m1;
printf(“Enter mark 2\n”);
scanf(“%d”,&stud.m.m2);
y=stud.m.m2;

printf(“Enter mark 3\n”);
scanf(“%d”,&stud.m.m3);
z=stud.m.m3;
stud.tot=x+y+z;
printf(“Total marks= %d”,stud.tot);
getch();
}
