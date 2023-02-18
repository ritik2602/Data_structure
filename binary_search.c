//Q5.Wap to implement binary search
#include<stdio.h>
void main()
{
     printf("Name:- Ritik Gupta\n");
    printf("Roll No.:- 2100320130138\n");
    int i,n,l,h,mid,x,count=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("sorted array be:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nenter the number to search\n");
    scanf("%d",&x);
    l=0;
    h=n-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==x)
        {
            printf("number found at position %d\n",mid+1);
            count++;
            break;
        }
        else if(x<a[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(count==0)
    {
        printf("number not found");
    }
}
