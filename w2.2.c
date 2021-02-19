#include <stdio.h>

void main()
{
    int i,arr[30],n,S1=0,S2=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            S1=S1+arr[i];
        }
        if(i%2==0)
        {
            S2=S2+arr[i];
        }
    }
    printf("\nSum of even elements=%d",S1);
    printf("\nSum of even position elements=%d",S2);
}
