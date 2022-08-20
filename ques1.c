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
        a=b;
        b=c;
    }
    printf("The %dth term of Fibonnaci series is %d\n",n,c);
    //In above printf we can also write b instead of c as we have already swapped the value of c in b
    getch();
    return 0;
}