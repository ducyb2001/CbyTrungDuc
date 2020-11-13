#include<stdio.h>
void dem (int a[],int n,int b[])
{
	for (int i=0;i<n;i++)
	{
		int count=1;
		if (b[i]){
			b[i]=0;
			for (int j=1+i;j<n;j++)
			{
				if (a[j]==a[i])
				{
					count++;
					b[j]=0;
				}
			}
			if (count>1)
				printf ("%d ",a[i]);
		}
		
	}
}
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[100];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	dem(a,n,b);
	return 0;
}
