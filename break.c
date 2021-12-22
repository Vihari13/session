#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("Enter the range:- ");
    scanf("%d",&n);
    printf("Enter Values:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
        if(a[i]<0)
        {
            continue;
        }
        if(a[i]==0)
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}
