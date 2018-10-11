#include<stdio.h>
void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int ub);
int main()
{
	int i,n,a[10];
	printf("Enter the no of Element\n");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("Array after sort\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void mergesort(int a[],int lb,int ub)
{
  int mid;
  if(lb<ub)
  { 
  mid=(lb+ub)/2;	
  mergesort(a,lb,mid);
  mergesort(a,mid+1,ub);
  merge(a,lb,ub);	
 }
}
void merge(int a[],int lb,int ub)
{
	int start=lb;
	int mid=(lb+ub)/2;
	int l=lb;
	int k=mid+1;
	int b[10];
	int i;
	while(lb<=mid && k<=ub)
	{
		if(a[lb]>=a[k])
		{
			b[l]=a[k];
			k=k+1;
		}
		else
		{
			b[l]=a[lb];
			lb=lb+1;
		}
		l=l+1;
	}
	if(lb>mid)
	{
		while(k<=ub)
		{
			b[l]=a[k];
			l=l+1;
			k=k+1;
		}
	}
	else
	{
		while(lb<=mid)
		{
			b[l]=a[lb];
			l=l+1;
			lb=lb+1;
		}
	}
	for(i=start;i<=ub;i++)
    {
    	a[i]=b[i];
    }
}

