#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	x=10;
	y=20;
	printf(" %d \t %d ", x , y);
	swap(&x,&y);
	printf(" \n values after swap \n");
	printf(" %d \t %d ", x , y);
	getch();
	return 0;
}

void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
