#include<stdio.h>
//Using Single dimensional integer array 
int main(){ 
    int arr[7]; 
    int i,sum=0;
for(i=0;i<=6;i++)
{
     printf("Enter %d no:",i+1 );
     scanf ("%d",&arr[i]);
}
printf("your inputted\n");
for(i=0; i<=6; i++)
{
    printf("%d\n",arr[i]);
    sum=sum+arr[i];
}
printf("sum is %d\n Average is %.2f",sum,sum/7.0);
return 0;
}