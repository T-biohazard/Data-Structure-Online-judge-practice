#include <stdio.h>
int main()
{
    int stdent;
    scanf("%d", &stdent);
    int code[stdent], i, final_code;
    double note[stdent], max=0.0;

    for(i=0; i<stdent; i++)
        scanf("%d  %lf", &code[i], &note[i]);
    for(i=0; i<stdent; i++)
    {
        if(note[i]>max)
        {
            max = note[i];
            final_code = i;
        }
    }

    if(max<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", code[final_code]);
    return 0;
}
