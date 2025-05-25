#include <stdio.h>
int main()
{
    int n, i, j, s, c = 0, flag = 0;
    printf("\n Enter the value of n");
    scanf("\n%d",&n);
    int a[n];
    printf("enter the numbers");
    for (i = 0; i < n; i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&s);
    for (i = 0; i < n; i++)
    {
        if(a[i]==s)
        {
            flag=1;
            c = i;
        }
    }
    if (flag == 1)
        printf("the number %d found at the index %d", s, c);
    else
        printf("sorry");
}