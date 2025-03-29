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
printf("\nAfter coming back from display"); 
for(int i=0;i<5;i++)
{
    printf("\n%d",arr[i]);
}
return 0; 
}
void display(int brr[5])
{
printf("\nlnside display"); 
for(int i=0;i<5;i++)
{
printf("\n%d",brr[i]);
brr[i]+=2;
}
}