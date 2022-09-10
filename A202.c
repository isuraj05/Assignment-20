#include<stdio.h>
#include<conio.h>
#include<string.h>
void swapStrings(char*,char*);
int main()
{
	char a[100],b[100];
	int i;
	printf("Enter two strings: ");
	fgets(a,100,stdin);
	fflush(stdin);
	fgets(b,100,stdin);
	
	for(i=0;a[i];i++);
	a[i-1]='\0';
	
	for(i=0;b[i];i++);
	b[i-1]='\0';
	
	swapStrings(a,b);
	printf("After swapping the strings, a=%s and b=%s",a,b);
	getch();
}

void swapStrings(char *p,char *q)
{
	char temp[100];
	strcpy(temp,p);
	strcpy(p,q);
	strcpy(q,temp);	
}
