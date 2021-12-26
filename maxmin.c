#include<stdio.h>
void sort(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    findmaxmin(arr,n);
}
void findmaxmin(int arr[],int n)
{
    int max,min;
    max=arr[0];
    min=arr[n-1];
    printf("\nMaximum number is %d ",max);
    printf("\nMinimum number is %d ",min);
}
int main()
{
    int arr[10];
    int n,i;
    printf("\nEnter length : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter elements: ");
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}
/* Time complexity of Bubble sort is O(n2)
 * Time complexity for finding maximum and minimum of a sorted array is O(1)
 */
