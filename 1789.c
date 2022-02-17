#include<stdio.h>
int main()
{
    int i,n,a,j,t;
    while(scanf("%d",&n)!=EOF){
        j=0;
        for(i = 0;i < n;i++){
            scanf("%d",&a);
            if(a>j)j=a;
        }
        if(j<10)t=1;
        else if(j>=20)t=3;
        else t=2;
        printf("%d\n",t);
    }
    return 0;
}
