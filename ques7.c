#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,x;
    printf("Enter two numbers for getting prime numbers between them\n");
    scanf("%d %d",&a,&b);
    for(x=(a<b?a:b) ; x<=(a>b?a:b) ; x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            break;
        }
        if(i==x)
        printf("%d ",x);
    }
    getch();
    return 0;
}