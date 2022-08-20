#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,x,flag=0;
    printf("Enter a number to get next prime number\n");
    scanf("%d",&a);
    for(x=a ; 1 ; x++)
    {
        flag=0;
        for(i=2;i<x;i++)// we can also write x/2
        {
            if(x%i==0)
            flag=1;
        }
        if(flag==0)
        {
        printf("%d ",x);
        break;
        }
    }
    getch();
    return 0;
}