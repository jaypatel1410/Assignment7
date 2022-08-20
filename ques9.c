#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter an number\n");
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("%d is an ArmStrong number",n);
    }
    else
    {
        printf("%d is not an armstrong number",n);
    }
    getch();
    return 0;
}