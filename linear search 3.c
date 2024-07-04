#include<stdio.h>
int lsearch(int [],int,int);
int i,flag=0,f=0;
int j=0;
main()
{
    int n,i,a[10],key;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
   j=lsearch(a,n,key);

    if(f==1)
    {
        printf("element %d is found at %d",key,a[i]);
    }
    else{
        printf("element %d is not found",key);
    }
 int lsearch(int a[i],int n,int key,int j)
 {
 if(j<n)
 {
 	if(key==a[i])
 	{
 		flag=1;
 		return(i);
	 }
	 else
	 j=j+1;
	 lsearch(a,n,key,j);
 }
 
  else
 {
 	flag=0;
 	return(i);
 }
}
}
