#include<stdio.h>
#include<conio.h>
void main()
 {
     int n,i;
     clrscr();
     printf("Enter an integer:\t");
     scanf("%d",&n);
     i=n;
     while(i>=1)
     {
       printf("%d\n",i);
       i--;
     }
     getch();
 }