#include<stdio.h>
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
    for(i=0;i<n;i++)
    {

    if(a[i]==key)
    {
        flag=1;
        break;
    }
    }
    if(flag==1)
        printf("element %d is found at %d",key,a[i]);
    else
        printf("element %d is not found",key);
}

