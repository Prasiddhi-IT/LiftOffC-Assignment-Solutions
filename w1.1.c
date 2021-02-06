#include <stdio.h>

void main()
{
    int x,y,A,B,C;
    float D;
    printf("\nEnter two numbers\n");
    scanf("%d%d",&x,&y);
    A=x+y;
    B=x-y;
    C=x*y;
    D=x/y;
    printf("Sum=%d\n",A);
    printf("Difference=%d\n",B);
    printf("Product=%d\n",C);
    printf("Quotient=%f\n",D);

}
