#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N ; i++)
    {
        for(int s = 1 ; s<=N-i ; s++){
            printf(" ");
        }
        for(int k=1 ; k<=(2*i)-1; k++){
            if(i%2==0){
                printf("-");
            }
            else if(i%2!=0){
                printf("#");
            }
        }
        printf("\n");
    }
    for(int i=N; i>1 ; i--){
        for(int s = N-i+1 ; s>=1 ; s--){
            printf(" ");
        }
        for(int k=2 ; k<(2*i)-1; k++){
            if(i%2==0){
                printf("#");
            }
            else if(i%2!=0){
                printf("-");
            }
        }
        printf("\n");
    }
    
    return 0;
}

