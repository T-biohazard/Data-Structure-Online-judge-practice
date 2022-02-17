#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int len_s = strlen(s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int len_t = strlen(t);
    int k;
    scanf("%d",&k);

    int pref_length = 0;

    while (s[pref_length] == t[pref_length] && pref_length < len_s && pref_length < len_t) {
        pref_length++;
    }

    int diff = k - len_s - len_t + 2*pref_length;
    if (diff < 0) {
        printf("No\n");
    } else if (k >= len_s + len_t) {
        printf("Yes\n");
    } else if (diff % 2 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
