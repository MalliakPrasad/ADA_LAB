#include <stdio.h>
#include <conio.h>

int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}

int main()
{
    int n,n1,n2,ch;
    printf("GCD of 2 numbers\n");
    printf("enter the 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("GCD of %d and %d is %d\n",n1,n2,gcd(n1,n2));
    return 0;
}
