#include <stdio.h>
 
int fact(int);
int main()
{
 int n,f;
 
  	printf("Enter a number:\n");
  	scanf("%d",&n);
  	f=fact(n);
    printf("Factorial of the num %d= %d\n",n,f);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

