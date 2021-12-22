#include <stdio.h>

int main()
{
    int i, j, k;

    for(i=1; i<=5; i++)
    {
        
        for(j=1; j<i; j++)
        {
            printf("_");
        }
        k = 9-2*(i-1);
        for(j=i; j<=5; j++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
/*OUTPUT
99999
_7777
__555
___33
____1
*/
