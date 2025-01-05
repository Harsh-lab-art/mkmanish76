#include <stdio.h> 
//Using single dimensional integer array 
int main(){
int arr[10],i;
for(i=0; i<=9; i++)
{
printf("Enter a no:");
scanf("%d",&arr[i]);
}
printf("You inputted:");
for(i=0; i<=9; i++)
{
    printf("\n%d",arr[i]);
}
return 0;
}