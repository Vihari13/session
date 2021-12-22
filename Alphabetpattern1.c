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
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
AAAAA
_BBBB
__CCC
___DD
____E
*/
