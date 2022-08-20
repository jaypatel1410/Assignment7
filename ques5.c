#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    for(i=a<b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        break;
    }
    //printf("The HCF of %d and %d is %d",a,b,i);
    if(i==1)
    {
        printf("%d and %d are coprime numbers",a,b);
    }
    else
    {
        printf("%d and %d are not coprime numbers",a,b);
    }
    getch();
    return 0;
}