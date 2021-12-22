#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("_");
        }
        for(k=i;k<=5;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}  
/* OUTPUT
*****
_****
__***
___**
____*
*/
