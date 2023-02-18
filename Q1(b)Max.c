
#include<stdio.h>
void main()
{
    printf("Name:-Ritik Gupta\n");
    printf("Roll no:-2100320130138\n");
    int n,i;
    printf("\nenter size of array :");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max= a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
     printf("maximum no.= %d",max);

}
