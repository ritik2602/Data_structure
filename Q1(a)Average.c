//Q1(a). WAP to find average of n given nos?
#include<stdio.h>
void main()
{
    printf("Name:-Ritik Gupta\n");
    printf("Roll No:-2100320130138\n");
    int n,i;
    printf("\nenter count of nos\n");
    scanf("%d",&n);
    int a[n];
    printf("enter n nos\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    avg = sum/n ;
    printf("average of n nos : %.2f",avg);
}
