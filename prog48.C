#include <stdio.h>
 int main(){
     int arr[5],i;
      int *p;
        p=arr;
       for(i=0;i<5;i++){
         printf("Enter no:");
          scanf("%d",arr+i);
       }
    for(i=0;i<5;i++){
         printf("\n%d",*(arr+i));
    }
          return 0;
    }