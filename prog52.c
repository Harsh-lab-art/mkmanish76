#include <stdio.h>
 void display(int []); 
 int main()
{
int arr[5];
for(int i=0;i<5;i++) 
{
    printf("enter no:");
    scanf("%d",&arr[i]);
}
display(arr); 
return 0;
}
 void display(int brr[5])
 {
for(int i=0;i<5;i++)
{
printf("\n%d",brr[i]);
}
}
