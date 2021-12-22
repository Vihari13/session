#include <stdio.h>

int main() {
    double x=30,y=20,k;
    char c;
    printf("Enter 'a' or 'b' : ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
            k = x+y;
            printf("Sum is : %f",k);
            break;
        case 'b':
            k=x-y;
            printf("Difference is : %f",k);
            break;
        default:
            printf("Enter Valid choice");
            break;
    }
    
    return 0;
}
