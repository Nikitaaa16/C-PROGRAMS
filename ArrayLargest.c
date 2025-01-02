#include <stdio.h>
int main()
{
    int n,i,j,max;
    printf("\n Enter the value of n");
    scanf("\n%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    max=arr[0];
    for(j=1;j<n;j++)
    {
       if(arr[j]>max)
       max=arr[j];
    }
    printf("\n The largest element is %d",max);
        return 0;
}