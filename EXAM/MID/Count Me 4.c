#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[26] = {0};
    char STR[26] = "abcdefghijklmnopqrstuvwxyz";
    char S[10000];

    scanf("%s", S);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == 'a') a[0]++;
        else if (S[i] == 'b') a[1]++;
        else if (S[i] == 'c') a[2]++;
        else if (S[i] == 'd') a[3]++;
        else if (S[i] == 'e') a[4]++;
        else if (S[i] == 'f') a[5]++;
        else if (S[i] == 'g') a[6]++;
        else if (S[i] == 'h') a[7]++;
        else if (S[i] == 'i') a[8]++;
        else if (S[i] == 'j') a[9]++;
        else if (S[i] == 'k') a[10]++;
        else if (S[i] == 'l') a[11]++;
        else if (S[i] == 'm') a[12]++;
        else if (S[i] == 'n') a[13]++;
        else if (S[i] == 'o') a[14]++;
        else if (S[i] == 'p') a[15]++;
        else if (S[i] == 'q') a[16]++;
        else if (S[i] == 'r') a[17]++;
        else if (S[i] == 's') a[18]++;
        else if (S[i] == 't') a[19]++;
        else if (S[i] == 'u') a[20]++;
        else if (S[i] == 'v') a[21]++;
        else if (S[i] == 'w') a[22]++;
        else if (S[i] == 'x') a[23]++;
        else if (S[i] == 'y') a[24]++;
        else if (S[i] == 'z') a[25]++;
    }

    for (int i = 0; i < 26; i++) {
        if (a[i] > 0) {
            printf("%c - %d\n", STR[i], a[i]);
        }
    }

    return 0;
}
