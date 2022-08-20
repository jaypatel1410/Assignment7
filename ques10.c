#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1000,x,r,sum;
    for(n=0;n<=1000;n++)
    {
        sum=0;
        x=n;
        while(x)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
        if(sum==n)
        {
            printf("%d ",n);
        }
    }
    getch();
    return 0;
}