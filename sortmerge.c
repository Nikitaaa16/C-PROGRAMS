
#include <stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the size of mat1");
scanf("%d",&m);
printf("enter the no.of columns of mat 1");
scanf("%d",&n);
int a[m];
int b[n];
int c[m+n];
printf("enter the elements");
for(int i=0;i<m;i++)
{
        scanf("%d",&a[i]);
}
printf("Enter the values for 2nd array");
for(i=0;i<n;i++)
{
    scanf("%d",&b[i]);
}
i=0,j=0,k=0;
while(i<m && j<n)
{
    if(a[i]<b[j])
        c[k++]=a[i++];
    else
        c[k++]=b[j++];
}
while(i<m)
    c[k++]=a[i++];
while(j<n)
    c[k++]=b[j++];
printf("\n The merged array :-");
for(i=0;i<k;i++)
    printf("\n%d",c[i]);
}