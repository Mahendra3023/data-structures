#include <stdio.h>
int main()
{
	int i,n,flag=0,high,mid,first,last,key,b,a[100];
	printf("enter the numbers");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to find in an array");
	scanf("%d",&key);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]==key)
		{
			printf("flag=1 and key element found");
			break;
		}
		else if(a[mid]>key)
		{
		last=mid-1;
		printf("flag=1 and key element found");
		break;
		}
		else if(a[mid]<key)
		first=mid+1;
		printf("flag=1 and key element found");
		break;
	}
	
}
