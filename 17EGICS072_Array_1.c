#include<stdio.h>
int main()
{
	int i,n,c,j,k,count=0;
	int a[100],f[100],d[100];
	printf("Enter Size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k-1];
				}
				count++;
			}
		}
		f[i]=count;
		d[i]=a[i];
	}
	for(i=0;f[i]!=0;i++)
	{
		if(f[0]>f[i])
		{
			c=i;
			f[0]=f[i];
		}
	}
	printf("No. with max. frequency is %d",a[c]);
}
