#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char a[]);
int main() {
    char a[1000];
    scanf("%s",a );
    if(is_palindrome(a)){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
int is_palindrome(char a[]){
    int n = strlen(a);
    int i=0,j = n - 1;
    while(*(a+i)!='\0'){
        if(*(a+i)!=*(a+j)){
            return 0;   
        }
        i++;j--;
    }
    return 1;
}
