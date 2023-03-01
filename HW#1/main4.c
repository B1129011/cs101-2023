#include <stdio.h>
#include <stdlib.h>

char change(char n){
    int num = n;
    if (n<58)
        //printf("%c",n);
        return n;
}
int main()
{
    char a[]= "-99acbc";
    char b[]= "99acbc";
    char c[]= "ac-99bc";
    char d[]="";
    int num ,in=0;
    int len = sizeof(a)-1;
    for (int i =0;i< len;i++){
        if (change(a[i])){
            d[in] = change(a[i]);
            in += 1;
        }
    }
    int x = atoi(d);
    printf("%d\n",x);
    
    in = 0;
    for (int i =0;i< len;i++){
        if (change(b[i]))
            d[in] = change(b[i]);
            in += 1;
    }
    int y = atoi(d);
    printf("%d\n",y);    
 
    in = 0;
    for (int i =0;i< len;i++){
        int f = c[i];
        if (f< 58 ){
            
            d[in] = change(c[i]);
            in += 1;
            
        }
    }
    int z = atoi(d);
    printf("%d\n",z);    
     
    return 0;
}
