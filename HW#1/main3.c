#include <stdio.h>

int main()
{
    char a[] = "ABC123";
    int shift=2, i=0, j;
    int length=sizeof(a)/sizeof(a[0])-1;
    
    shift=(shift+length)%length;

    for (i=shift; i<length; i++)
    {
        printf("%c", a[i]);
    }
    
    for(i=0; i<shift; i++)
    {
        printf("%c", a[i]);
    }
    
    return 0;
}
