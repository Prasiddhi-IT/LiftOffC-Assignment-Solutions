#include <stdio.h>

void main()
{
    int i,n,S=0,r;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        S=S+r;
        n=n/10;
    }
    printf("Sum of digits=%d",S);
}

