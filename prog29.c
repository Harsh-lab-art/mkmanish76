#include<stdio.h>
//Using single dimensional integer array
 int main()
 {
    int arr[10];
    int i,n;
    for(i=0;i<=9;i++)
{
     printf("Enter no:");
    scanf("%d",&arr[i]);
}
    printf("Enter number to search:"); 
    scanf("%d" ,&n);
    for(i=0;i<=9;i++)
{    
    if(n==arr[i])
{
    printf("Number is at %d pos",i+1);
    break;
}
 }
 if(i==10)
 printf("\n number not found!");
 return 0;
 }
