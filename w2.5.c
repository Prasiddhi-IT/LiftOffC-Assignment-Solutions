#include <stdio.h>

void main()
{
    int i,j,size;
    printf("Enter size:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j || j==(size-i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
