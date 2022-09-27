#include<stdio.h>
int main()
{
	int a[100],i,n,mid,key;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("enter %d elements ",n);
	for(i=1;i<=n;i++)
	{
	 scanf("%d",&a[i]);
	}
	printf("Enter the element to find in an array:");
	scanf("%d",&key);
	for(i=0;i<=9;i++)
	 if(a[i]==key)
	 {
	 	printf("key element found at location %d",i-1);	
				break;
	 }
	 if(i>9)
	 printf(" key element not found");
	 return 0;
	 
}
