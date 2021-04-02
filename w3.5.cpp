#include<stdio.h>

int Pal(int x);
int n;
int main()
{
    int p;
    printf("\nEnter a number to check for Palindrome: ");
    scanf("%d", &n);
    p=Pal(n);
    if(p == 1)
        printf("\n%d is palindrome\n", n);
    else
        printf("\n%d is not palindrome\n", n);
    return 0;
}
int Pal(int x)
{
    static int sum = 0;
    if(x!=0)
    {
        sum = sum*10+x%10;
        Pal(x/10);  
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}
