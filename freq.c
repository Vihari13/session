#include <stdio.h>
int main() {
    int freq[100]={0};
    int a[100],n,i;
    printf("Enter Size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter numbers : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(freq[a[i]] != 0)
        {
            printf("\n""The frequency of ""%d is : %d",a[i],freq[a[i]]);
            freq[a[i]]=0;
        }
    }
    return 0;
}
