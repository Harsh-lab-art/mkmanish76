#include<stdio.h>
#include<string.h>
 int main()
 {
    char arr[20],brr[20];
    printf("Enter first string:"); 
    scanf("%s",arr);
    printf("Enter second string:");
    scanf("%s",brr);
    printf("Before joining");
    printf("\narr is %s",arr);
    printf("\nbrr is %s",brr);
    strcat(arr,brr);
    printf("\nAfter Joining");
    printf("\narr is %s",arr); 
    printf("\nbrr is %s",brr);
    return 0;
}