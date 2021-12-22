#include <stdio.h>
void swap(int *x, int *y)
{
	if (*x == *y) 
	{
		return;
	}
	*x = *x + *y;  
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int x,y;
	printf("Enter two numbers: \n");
	scanf("%d %d",&x,&y);
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
