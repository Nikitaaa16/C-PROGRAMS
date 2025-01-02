#include <stdio.h>
int main() 
{
    int n,p,c;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\n%d",n);
    for(int i=1;i<=10;i++)
    {
        p=n*i;
        printf("\n%d x %d = %d ",n,i,p);
    }
    return 0;
}