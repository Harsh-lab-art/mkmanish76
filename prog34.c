#include <stdio.h>
//Using double dimensional integer array 
int main()
{
     int arr[3][4];
    int i,j,sum;
    for(i=0;i<3;i++)
    { 
        for(j=0; j<4; j++)
        {
    printf("Enter number");
    scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("\nStd no=%d, Total=%d",i+1,sum);
    }
    return 0;
}