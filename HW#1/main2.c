#include <stdio.h>

int main() {
    char a[]="A3B2C4A9";
    int b=0, c=0;
    
    for (int i=0; i<sizeof(a)/sizeof(a[0])-1; i++)
    {
        if (a[i]>='0'&&a[i]<='9')
        {
            c=i;
            for (int j=0; j<a[c]-'0'; j++)
            {
                for (int k=b; k<c; k++)
                {
                    printf("%c", a[k]);
                }
            }
            b=c+1;
        }
        else
        {
            0;
        }
    }
    return 0;
}
