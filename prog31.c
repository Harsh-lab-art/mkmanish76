#include <stdio.h>
//Using single dimensional integer array 
int main(){
     int arr[10]; 
     int i,max=0;
for(i=0; i<=9; i++)
{
printf("Enter number:");
scanf("%d",&arr[i]);
}
for(i=0; i<=9; i++)
{
if(arr[i]>max)
max=arr[i];
}
printf("Largest no is %d" ,max);
return 0;
}