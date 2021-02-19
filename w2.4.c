#include <stdio.h>

void main()
{
    int i,n,S,L,a[30];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    S=a[0];
    L=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]>L)
        L=a[i];
       if(a[i]<S)
        S=a[i];
    }
    printf("\nLargest element=%d\tSmallest element=%d\n",L,S);
}


