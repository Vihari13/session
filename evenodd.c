#include <stdio.h>

int main()
{
    int i,j;
    printf("Even numbers: ");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    printf("\nOdd Numbers: ");
    for(j=1;j<=100;j++)
    {
        if(j%2==1)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
