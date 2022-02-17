#include <stdio.h>
int main()
{
    int s, t, f, n;
    scanf("%d%d%d", &s, &t, &f);
    n = s+t+f;
    if(n< 0) n = 24 + n;
    printf("%d\n",n%24);
    return 0;
}
