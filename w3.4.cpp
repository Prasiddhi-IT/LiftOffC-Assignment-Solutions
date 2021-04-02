#include<stdio.h>

int fact(int x);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, fact(n));
    return 0;
}
 int fact(int x)
{
    if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}
