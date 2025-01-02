#include<stdio.h>
//using nested loop (Tringular shape star * pattern)
int main()
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }   
                printf("\n");    
    }
    return 0;
}