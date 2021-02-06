#include <stdio.h>

int main()
{
    float F,C;
    printf("Enter temperature in Celsius\n");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("\nTemperature in Fahrenheit is %f",F);
    return 0;
}
