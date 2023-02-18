#include<stdio.h>
int main()
{
    printf("Name:Ritik Gupta\n");
    printf("Roll No.:2100320130138\n");
    int arr[100],i,n;
    printf("enter array size:");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

    arr[j+1]=key;
    }

    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
 return 0;
}