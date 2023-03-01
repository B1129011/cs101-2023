#include <stdio.h>

 
void output(char n){
    if (n == '8')
     printf("VIII ");
    else if(n == '1')
     printf("I ");
    else if(n == '6')
     printf("VI ");
    else
     printf("%c ",n);
}
 
int main()
{
    char a[] = "81c8g8u168";
    int len = sizeof(a)-1;
    for (int i=0;i<len;i++)
        output(a[i]);
    
}
