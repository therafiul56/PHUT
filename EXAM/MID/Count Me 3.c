#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,countsmall=0,countcapital=0,countdigit=0;
    scanf("%d",&a);
    char S[10000];
    for(int i=1 ; i<=a ; i++){ 
        scanf("%s",S);
        for(int i=0 ; i<strlen(S) ; i++){
            if(S[i]>='a' && S[i]<='z')countsmall++;
            else if(S[i]>='A' && S[i]<='Z')countcapital++;
            else if(S[i]>='0' && S[i]<='9')countdigit++;
        }
        printf("%d %d %d\n",countcapital,countsmall,countdigit);
        countsmall=0;countcapital=0;countdigit=0;   
    }
    
    return 0;
}
