#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char str[100],*p;
	int i,nov=0,noc=0;
	p=NULL;
	p=str;
	
	printf("Enter a string: ");
	if(p!=NULL)
		fgets(p,100,stdin);
	p[strlen(p)-1]='\0';
	
	for(i=0;p[i];i++)
	{
		if(p[i]==' ')
			continue;
			
		if(p[i]=='A' || p[i]=='a' || p[i]=='E' || p[i]=='e' || p[i]=='I' || p[i]=='i'
			|| p[i]=='O' || p[i]=='o' || p[i]=='U' || p[i]=='u')
				nov++;
		else
			noc++;
	}
	printf("\nThe number of vowels in the string is %d ",nov);
	printf("\nThe number of consonants in the string is %d ",noc);
	getch();
}


