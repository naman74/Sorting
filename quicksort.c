#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);

int main()
{
	
	int i,n,a[20];
	printf("enter the no of element");
	scanf("%d",&n);
	printf("enter the element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("array after sorted\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}

void quicksort(int a[],int lb,int ub)
 {
 	int loc;
 	if(lb<ub)
 	{
 		loc=partition(a,lb,ub);
 		quicksort(a,lb,loc-1);
 		quicksort(a,loc+1,ub);
	 }
 }
 int partition(int a[],int lb,int ub)
 {
 	int pivot,start,end,temp;
 	pivot=a[lb];
 	start=lb;
 	end=ub;
 	while(start<end)
 	{
 		while(a[start]<=pivot && start<end)
 		{
 			start=start+1;
		 }
		 while(a[end]>pivot){
		 	end=end-1;
		 }
		 if(start<end)
		 {
		 	temp=a[start];
		 	a[start]=a[end];
		 	a[end]=temp;
		 }
	 }
	 a[lb]=a[end];
	 a[end]=pivot;
	 return (end);
 }
