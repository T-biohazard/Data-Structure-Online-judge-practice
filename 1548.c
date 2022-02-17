#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE  1
#define FALSE 0
void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;

}
int main(){
int  n= 0, m = 0, c, d, k,count;
	int a[1000], b[1000];
	char t;
	scanf("%d", &n);
	for(c=0; c < n; c++){
        count=0;
		scanf("%d", &m);
		for(d=0; d < m; d++)
		{
			scanf("%d", &a[d]);
			b[d] = a[d];
		}
		do
		{
			t = FALSE;
			k = 0;
			while (k < m - 1)
			{	if (b[k] < b[k + 1])
				{	swap(&b[k],&b[k+1]);

					t = TRUE;
				}
				k++;
			}
		} while (t == TRUE);
		for(d=0; d < m; d++)
			if (a[d] == b[d])
				count++;

		printf("%d\n", count);
	}
		return 0;
}
//int  Ncasos= 0, Malunos = 0, c, d, k, aux, qtd;
	//int vAntes[1000], vDepois[1000];
	//char trocas;
