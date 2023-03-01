#include <stdio.h>

int main()
{
    char a[]="10001111";
    char b[]="10011110";
    int sum=0, coef=8, i=0;
    int o[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int length=(unsigned long)sizeof(a)-1;
    
    for (i=0; i<length; i++)
    {
        if (a[i]-'0'==1)
        {
            sum+=(a[i]-'0')*coef;
        }
        
        coef/=2;
        
        if (coef==0)
        {
            printf("%c", o[sum]);
            sum=0;
            coef=8;
        }
    }
    
    printf("\n");
    
    for (i=0; i<length; i++)
    {
        if (b[i]-'0'==1)
        {
            sum+=(b[i]-'0')*coef;
        }
        
        coef/=2;
        
        if (coef==0)
        {
            printf("%c", o[sum]);
            sum=0;
            coef=8;
        }
    }
    
    return 0;
}
