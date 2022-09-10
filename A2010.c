#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100],*p;
	p=NULL;
	p=str;
	
	printf("Enter a string: ");
	if(p!=NULL)
		fgets(p,100,stdin);
	p[strlen(p)-1]='\0';
	printf("\n%s",strrev(p));
	getch();
}


