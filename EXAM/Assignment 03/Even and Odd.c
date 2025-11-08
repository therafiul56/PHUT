#include <stdio.h>

void odd_even(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int cntodd=0,cntevn=0;
    for(int i= 0 ; i<n;i++){
        if(a[i]%2==0){
            cntevn++;
        }
        else if(a[i]!=2){
            cntodd++;
        }
    }
    printf("%d %d",cntevn,cntodd);
}
int main() {
    
    odd_even();
    return 0;
}
