#include <stdio.h>
//Using double dimensional integer array
 int main()
{ 
    int arr[3][4];
    int i,j,sum=0;
    for(i=0;i<3;i++)
 {
     for(j=0; j<4; j++)
    {
      printf("Enter no:");
      scanf("%d",&arr[i][j]);
      sum=sum+arr[i][j];
    }
 }
    printf("you inputted:\n");
    for(i=0;i<3;i++){
        for(j=0; j<4; j++){
            printf("\n");
        }
        printf("\n");
    }
    printf("Sum is %d",sum); 
    printf("\nAvg is %.2f",sum/122.0);
    return 0;
}