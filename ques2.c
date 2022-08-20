#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=0,c,n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
    return 0;
}