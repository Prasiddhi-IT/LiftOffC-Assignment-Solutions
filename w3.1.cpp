#include<stdio.h>
#include<math.h>

int Square(int x);
int main()
{
  int n,sq;
  printf(" \n Enter an integer : ");
  scanf("%d", &n);
  sq=Square(n);
  printf("\n Square of a given number %d = %d",n,sq); 
  return 0;
}
int Square(int x)
{
	return pow(x,2);
}
