#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[10], brr[10];
    printf("Enter a string:");
    gets(arr);
    strcpy(brr,arr);
    printf("original string is %s\n",arr);
    printf("copied string is %s",brr);
    return 0;
}
