#include<stdio.h>
// using nested loop( 1,22,333, pattern)
int main()
{
int i,j;
for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}