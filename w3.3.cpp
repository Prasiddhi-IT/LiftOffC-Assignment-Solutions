#include <stdio.h>

int gcd(int x, int y);  
int main()
{
   int n1, n2, hcf, lcm;
   printf("Enter two integers:\n");
   scanf("%d %d", &n1, &n2);
   hcf = gcd(n1, n2);
   printf("GCD: %d", hcf);
   printf("\nLCM: %d", (n1 * n2) / hcf);
   return 0;
}
int gcd(int x, int y)
{
   if (y == 0) 
   {
      return x;
   }
   else 
   {
      return gcd(y, x % y);
   }
}
