#include <stdio.h>
int main()
{
    int n,m,i,j; char arr[10][10] = {"Zero", "One", " two", " Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    printf("Enter a number: ");
    scanf("%d",&n);
     i=0;
    int digit[20];
    while(n>0)
    {
        digit[i]=n%10;
        n=n/10;
        i++;
    }
    while(i>0)
    {
        puts(arr[digit[--i]]);
    }
}