#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, k;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element position to delete : ");
    scanf("%d", &k);
    if(k < 0 || k > n)
    {
        printf("Invalid position!);
    }
    else
    {
        for(i=k-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("\nElements of array after delete are : ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
