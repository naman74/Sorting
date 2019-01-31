#include<stdio.h>
int main()
{
	char a[20];
	char temp;
	int i,j,len;
	puts("Enter the String");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	puts("String after short");
	puts(a);
	return 0;
}
