#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0;
    char c[100000];
    scanf("%s",c);
    for(int i=0 ; i<strlen(c) ; i++){
        if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && 
           c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U'){ 
            count++;
            // printf("%c",c[i]);
        }
        
    }
    printf("%d",count);
        
    return 0;
}
Count Me 2
