#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int s=0 ; s<n-i ; s++){
            printf(" ");
        }
        for(int j=i ; j>0 ; j--){
            printf("%d",j);
            
        }
        printf("\n");
    }
}


