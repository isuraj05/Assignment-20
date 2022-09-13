#include<stdio.h>
#include<conio.h>

int main()
{
	int a=5,*p,**q,***r;
	p=&a;
	q=&p;
	r=&q;
	printf("%d %d %d %d\n",p,&r,*q,&a);
	printf("%d %d %d %d\n",**r,&q,**&p,a);
	printf("%d %d %d %d\n",***r,**q,*p,**&p);
	getch();
}
