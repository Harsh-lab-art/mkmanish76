#include <stdio.h>
float average(void);
int main(){
    float d;
    d=average(); 
    printf("Average of nos is %f",d);
    return 0;
}
float average(){
    int n,i,sum=0,x;
    printf("Avg of how many nos you want ?");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("Enter no:");
    scanf("%d",&x); 
    sum=sum+x;
    }
return (float)sum/n;
}