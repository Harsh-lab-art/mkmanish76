#include <stdio.h>
//Using double dimensional integer array 
int main()
{
     int arr[3][3];
    int i,j,sum=0;
    for(i=0;i<3;i++)
    { 
        for(j=0; j<3; j++)
        {
    printf("Enter no:");
    scanf("%d",&arr[i][j]);
    if(i==j)
        sum=sum+arr[i][j];
        }
    }
    printf("Sum of diagonal elements is %d",sum);
    return 0;
}