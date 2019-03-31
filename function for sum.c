#include<stdio.h>
#include<conio.h>

sum(int x,int y)
   {
       int z;
       z=x+y;
       printf("the sum of the numbers is:%d", z);
       return z;
 int main()
 {
     int a,b;
     printf(" \n enter two numbers:");
     scanf(" %d %d", &a, &b);
     sum(a,b);
     return 0;
 }
