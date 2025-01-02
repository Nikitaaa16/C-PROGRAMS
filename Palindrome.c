#include <stdio.h>
int main() 
{
    int a,n,r=0,num;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",n);
    num=n;
while(n!=0)
{
    a=n%10;
   r=r*10+a;
    n=n/10;
}
if(r==num)
printf("\n%d is a palindrome number",r);
else
printf("\n%d is not a palindrome number",r);
return 0;
}