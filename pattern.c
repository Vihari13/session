#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=i; j<5; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(j==1 || j==(2*i-1))
            {
                printf("*");
            }
            if(i==5 && j!=9)
            {
                printf("_");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
    * 
   *  * 
  *    * 
 *      * 
*________* 
*/
