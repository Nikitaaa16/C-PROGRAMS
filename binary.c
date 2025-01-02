#include <stdio.h>
int main() 
{
    int i,n,c=0,a;
    int b[30];
     printf("Enter the number: \n");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%2;
        b[c]=a;
        c++;
        n=n/2;
    }
    printf("The binary equivalent = ");
    for(i=c-1;i>=0;i--)
    printf("%d",b[i]);
    return 0;
}
