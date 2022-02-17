#include <stdio.h>
#include <string.h>
int main()
{
    char num[25], temp;
    scanf("%s", num);
    int lnth = strlen(num);
    int i, j;
    for(i=0, j=lnth-1; i < lnth/2; i++, j--)
    {
        temp = num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("%s\n", num);
    return 0;
}
