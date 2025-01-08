#include<stdio.h>
//using single dimension integer
int main()
{
    int arr[7];
    int i,soe=0,sod=0;
    for (i=0; i<=6; i++)
    {
        printf("Enter %d no:",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        soe=soe+arr[i];
        else
        sod=sod + arr[i];
    }
    printf("sum of even numbers is %d \n sum of odd numbers is %d",soe,sod);
    return 0;
}