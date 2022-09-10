#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,*p,*q;
	p=NULL;
	q=NULL;
	p=&a;
	q=&b;
	
	printf("Enter two numbers: ");
	if(p!=NULL)
		scanf("%d",p);
	if(q!=NULL)
		scanf("%d",q);	
	
	if(*p>*q)
		printf("The maximum number between the two given numbers is %d",*p);
	else
		printf("The maximum number between the two given numbers is %d",*q);
	getch();
}


