#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,flag=0;
    for(n=1;n<=100;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            flag=1;
        }
        if(flag==0)
        printf("%d ",n);
    }
    getch();
    return 0;
}
/*
FOR PRINTING N PRIIME NUMBERS
int i,n=100,x=2;
while(n)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
        {
            printf("%d ",i);
            n--;
        }
        x++;
*/