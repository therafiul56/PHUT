#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size,count2=0,count3=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<size ; i++){
        if(arr[i]%2==0 && arr[i]%3==0)count2++;
        else if(arr[i]%2==0)count2++;
        else if(arr[i]%3==0)count3++;
        
        
    }
    printf("%d %d",count2,count3);
    


    return 0;
}
