include<stdio.h>
int main()
{
  int nums=[2,7,11,15];
  k=9;
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<4;j++)
    {
      if(nums[i]+nums[j]==k)
        printf("[%d,%d]",i,j);
    }
  }
  return 0;
}
/*OUTPUT
[0,1]
*/
