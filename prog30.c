#include<stdio.h>
//using single dimensional integer array
int main()
{
    int arr[10];
    int i,n,count=0;
    for(i=0; i<=9; i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&n);
    for(i=0; i<=9; i++)
    {
        if(n==arr[i])
        {
            printf("\n  Number is at %d pos ",i+1);
            count++;
        }
    }
    if (count==0)
    printf("\n number not found!");
    return 0;
}