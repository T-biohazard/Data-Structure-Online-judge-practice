#include <stdio.h>
int main()
{
    int a[4],b,c,d,e,f, g;
    for(b=0; b<4; b++)
        scanf("%d", &a[b]);
    for(b=0;b<4;b++)
    {
        for(c=b+1; c<4; c++)
        {
            if(a[c]<a[b])
            {
                e=a[b];
                a[b]=a[c];
                a[c]=e;
            }
        }
    }
    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f) printf("S\n");
    else printf("N\n");
    return 0;
}
