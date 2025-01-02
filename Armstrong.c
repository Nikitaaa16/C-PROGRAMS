#include <stdio.h>
#include <math.h>
int main() 
{
    int a,n,r=0,num,num2,c;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\n%d",n);
    num=n;
    num2=n;
    while(n!=0)
{
    a=n%10;
    n=n/10;
    c++;
}
while(num!=0)
{
    a=num%10;
   r+=pow(a,c);
    num=num/10;
}
if(num2==r)
printf("\n%d is a armstrong number",num2);
else
printf("\n%d is not a armstrong number",num2);
return 0;
}