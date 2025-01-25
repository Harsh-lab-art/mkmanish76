#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10],brr[10];
    char crr[20];
    printf("Enter first string:");
    scanf("%s" ,arr);
    printf("Enter second string:");
    scanf("%s" ,brr);
    strcpy(crr,arr); 
    strcat(crr," "); 
    strcat(crr,brr);
    printf("%s" ,crr); 
    return 0;
}    