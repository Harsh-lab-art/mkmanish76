#include<stdio.h>
// using nested loop( 1,2 4,3 6 9.. pattern)
int main()
{
int i,j;
for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ",i*j);
        }
        printf("\n");
    }
    return 0;
}