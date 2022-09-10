#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100],*p;
	int l;
	p=NULL;
	p=str;
	
	printf("Enter a string: ");
	if(p!=NULL)
		fgets(p,100,stdin);
	l=strlen(p)-1;
	printf("The length of the string is %d",l);
	getch();
}


