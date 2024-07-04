#include<stdio.h>
int lsearch(int [],int,int);
int i,f=0;
main()
{
    int n,i,a[100],flag=0,key;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
   f=lsearch(a,n,key);

    if(f==1)
    {
        printf("element %d is found at %d",key,a[i]);
    }
    else{
        printf("element %d is not found",key);
    }
 int lsearch(int a[i],int n,int key)
 {
 for(i=0;i<n;i++)
    {

    if(a[i]==key)
    {
        f=1;
        break;
    }
    }
    returnf();
 }
 return 0;
}
