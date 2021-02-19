#include <stdio.h>
#include<string.h>

void main()
{
    char s[1000];
    int i,W=0;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
    {
    	if(s[i]==32)
    	 W++;
 	}
 	if(i>0)
 	 W++;
    printf("No. of words in string = %d\n",W);
}

