#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int change(char a[],int len, int i){
    char b[] = {'0','0'};
    char cmp;
    int arr[9];
    int in =0, F =0 , m;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i=0;i < len;i++){
        if (a[i] != ' '){
            
            if(a[i] == '-'){
                b[0] = '-';
            }else{
                b[1] = a[i];
                }
        }else{
            if (atoi(b)==0){
                
                cmp = b[0];
                b[0] = b[1];
                b[1] = cmp;
            }
            arr[in] = atoi(b);
            b[0] = 0;
            b[1] = 0;
            in ++;
        }
    }
    qsort(arr, n, sizeof(int), compare);
    printf("%d",arr[9-i]);
}


int main() {
    char a[] = "-9 8 7 6 5 -4 3 -2 1 ";
    int i = 4;
    int len= sizeof(a)-1;
    change(a,len,i);
    
    return 0;
}
