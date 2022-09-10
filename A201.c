#include<stdio.h>
#include<conio.h>
void swapValues(int*,int*);
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	swapValues(&a,&b);
	printf("After swapping the values, a=%d and b=%d",a,b);
	getch();
}

void swapValues(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
