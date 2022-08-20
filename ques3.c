#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=0,c,n,i;
    printf("Enter the number to check\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            printf("%d is in Fibonnaci Series",n);
            break;
        }
        if(c>n)
        {
            printf("%d is not in Fibonnaci Series",n);
            break;
        }
    }
    getch();
    return 0;
}