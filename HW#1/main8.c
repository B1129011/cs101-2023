#include <stdio.h>

int main(){
    char a[] = "Hello";
    char b[5] ={};
    int n[5] ={-1,-1,-1,-1,-1};
    int c = 4;
    for (int i=0;i<5;i++){
        int num = a[i];
        if(num<97){
            n[i]=1;
        }else{
            n[i]=0;
        }
        b[c-i]=a[i];
    }
    printf("a = ");
    for(int i=0;i<5;i++){
        printf("%c",a[i]);
    }
    printf("\na = ");
    for(int i=0;i<5;i++){
        int num = b[i];
        if (n[i]){
            if(num>97){
                 b[i] = num-32;
            }
        }else{
            if(num<97){
                b[i] = num+32;
            }
        }
        printf("%c",b[i]);
    }
}
