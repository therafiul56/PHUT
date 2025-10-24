#include<stdio.h>
#include<stdlib.h>
int main(){
    int A;
    scanf("%d",&A);
    int arr[A];
    for (int i = 0; i < A; i++)
    {
        scanf("%d",&arr[i]);
    }
    int del,inndex;
    scanf("%d",&inndex);
    for (int i = inndex; i < A ; i++)
    {
        arr[i]=arr[i+1];
    }
    A--;
    for (int i = 0; i < A; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
    
}
