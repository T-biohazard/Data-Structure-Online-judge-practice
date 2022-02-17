#include<stdio.h>
int main()
{
    int i,t,l,m,n;
    while(scanf("%d",&n)!=EOF){
        l=20;
        for(i = 0;i < n;i++){
            scanf("%d",&m);
            if(m<l){
                l=m;
                t=i+1;
            }
        }
        printf("%d\n",t);
        t=0;
    }
    return 0;
}
