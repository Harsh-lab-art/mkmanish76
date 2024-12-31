#include<stdio.h>
int main()
{
    int n;
    printf("Enter the int:");
    scanf("%d",&n);
    if (n>=0&&n<10)
    printf("one digit");
    else if (n>=9&&n<99)
    printf("Two digit");
    else if (n>=99&&n<999)
    printf ("Three digit");
    else
    printf("Four digits");
    return 0;
}
