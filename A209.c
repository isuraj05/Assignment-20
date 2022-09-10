#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int a[n],*p,i;
	p=NULL;
	p=a;
	printf("Enter %d numbers for an array: ",n);
	for(i=0;i<n;i++)
	{
		if(p!=NULL)
			scanf("%d",&p[i]);
	}
		
	for(i=0;i<n;i++)
		printf("%d ",p[n-(i+1)]);
		
	getch();
}


