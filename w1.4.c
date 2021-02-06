#include <stdio.h>

void main()
{
    int s1,s2,s3,s4,s5,T;
    float P;
    printf("Enter your marks:\n");
    printf("Physics:\n");
    scanf("%d",&s1);
    printf("Chemistry:\n");
    scanf("%d",&s2);
    printf("Biology:\n");
    scanf("%d",&s3);
    printf("Mathematics:\n");
    scanf("%d",&s4);
    printf("Computer:\n");
    scanf("%d",&s5);
    T=s1+s2+s3+s4+s5;
    P=(T/500.0)*100.0;
    if (P>=90)
        printf("\nYour grade is A");
    else if (P>=80)
        printf("\nYour grade is B");
    else if (P>=70)
        printf("\nYour grade is C");
    else if (P>=60)
        printf("\nYour grade is D");
    else if (P>=40)
        printf("\nYour grade is E");
    else if (P<40)
        printf("\nYour grade is F");
}
