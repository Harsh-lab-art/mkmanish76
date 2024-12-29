#include <stdio.h>
//using for
int main ()
{
    int n,sum=0;
    printf("Enter NOS and press 0 to stop");
    for(; ;)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        if(n<0)
        continue;
        sum=sum+n;
    }
    printf("sum is %d",sum);
    return 0;
}
