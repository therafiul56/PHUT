#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Scanarr(int a[],int* n){
    for(int i = 0 ; i<*n ; i++){
        scanf("%d",&*(a+i));
    }
}
int count_before_one(int a[],int* n){
    int i=0;
    while(i<*n && *(a+i)!=1){
        i++;
    }
    return i;
}
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    Scanarr(a,&n);
    int value = count_before_one(a,&n);
    printf("%d",value);
    
    
    return 0;
}
