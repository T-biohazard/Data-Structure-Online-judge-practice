 #include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int g;
    scanf("%d",&g);
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        scanf("%d %d %d",&n,&m,&x);
        int *a = malloc(sizeof(int) * n);
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        int *b = malloc(sizeof(int) * m);
        for(int b_i = 0; b_i < m; b_i++){
           scanf("%d",&b[b_i]);
        }
        // your code goes here
        int max = 0;
        int sum = 0;
        int items = 0;
        int apos = 0, bpos = 0;
        while (sum <= x && apos < n) {
            if (sum + a[apos] > x)
                break;
            sum += a[apos];
            apos++;
            items++;
        }
        while (sum <= x && bpos < m) {
            if (sum + b[bpos] > x)
                break;
            sum += b[bpos];
            bpos++;
            items++;
        }
        max = items;
        while (1) {
            if (apos <= 0)
                break;
            apos--;
            sum -= a[apos];
            items--;
            while (sum <= x && bpos < m) {
                if (sum + b[bpos] > x)
                    break;
                sum += b[bpos];
                bpos++;
                items++;
            }
            if (items > max)
                max = items;
            if (bpos == m)
                break;
        }
        printf ("%d\n", max);
    }
    return 0;
}
