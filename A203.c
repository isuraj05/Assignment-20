#include<stdio.h>
#include<conio.h>
void sort(int*,int);
int main()
{
	int n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter %d values for an array: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	
	sort(a,n);
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}

void sort(int *ptr,int size)
{
	int i,j,temp;
	for(i=1;i<size-1;i++)
	{
		for(j=0;j<size-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}		
}
