#include<stdio.h>
 int main()
{
	int i,n,key,a[10],mid,low,high,flag;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements in sorted form:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter key value:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<high)
	{
	mid=(low+high)/2;
	if(key==a[mid])
	{
	  flag=1;
       break;
	}
	else if(key<a[mid])
	high=mid-1;
	else
	low=mid+1;
}
	if(flag==1)
	printf("element is found at %d",mid+1);
	else
	printf("search is unsuccessful");
}
	
