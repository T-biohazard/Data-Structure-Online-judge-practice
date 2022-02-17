#include<stdio.h>
void swap(int* a, int* b){
 int temp=*a;
 *a=*b;
 *b=temp;
}

int main()
{   int trails,n,i,j,tmp;

    scanf("%d",&trails);
    while(trails--)
    {
        scanf("%d",&n);
        int arr[n],m=0;
        for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
         for ( i = 0; i <n-1; i++)
            {
                for (j = 0; j < n-i-1; j++)
                    {
                        if (arr[j] > arr[j+1])
                            {
                                m++;
                                swap(&arr[j],&arr[j+1]);
                                /* tmp = arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=tmp;*/

                            }

                    }

            }

        printf("Optimal train swapping takes %d swaps.\n",m);

    }

    return 0;
}
