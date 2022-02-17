#include<stdio.h>
#define MAX 500
 int a[MAX];
 int main(){
 int n,m,i,j,k,h,space;
 scanf("%d",&n);
  for(k=0; k<n; k++){
        scanf("%d",&m);
        for(i=0; i<m; i++){
            scanf("%d",&h);
            a[h]++;
        }
        space=1;
        for(i=20; i<=MAX; i++){
            for(j=1; j<=a[i]; j++,space++){
                printf("%d",i);
               if(space!=m){
                    printf(" ");
                }
            }
            a[i]=0;
        }
        printf("\n");


 }
 }

