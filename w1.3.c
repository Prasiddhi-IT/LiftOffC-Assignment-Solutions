#include <stdio.h>
#define PI 3.414

void main()
{
    float r,D,C,A;
    printf("\nEnter the radius:\n");
    scanf("%f", &r);
    D=2.0*r;
    C=2.0*PI*r;
    A=PI*r*r;
    printf("\nThe diameter of the circle is %f\n",D);
    printf("\nThe circumference of the circle is %f\n",C);
    printf("\nThe area of the circle is %f\n",A);
}
