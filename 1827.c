#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a[102][102];
    while(scanf("%d",&n)!=EOF){
        k=n-1;
        l=n/3;
        m=n-l;
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(i==j)a[i][j]=2;
                else a[i][j]=0;
                if(j==k)a[i][j]=3;
            }
            k--;
        }
        for(i = l;i < m;i++){
            for(j = l;j < m;j++){
                if(i==n/2 && j==n/2)a[i][j]=4;
                else a[i][j]=1;
            }
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
