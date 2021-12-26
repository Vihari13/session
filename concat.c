#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[10]="hello";    
   char ch2[10]="hi";
   strcat(ch,ch2);    
   printf("Value of first string is: %s",ch);    
   printf("\nLength is %d : ",strlen(ch));
 return 0;    
}  
