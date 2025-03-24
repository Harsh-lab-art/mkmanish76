#include <stdio.h> 
void average(void);
int main(){ 
    average();
    return 0;
}
void average(){ 
    int a,b,c;
    float x;
    printf("Enter 3 int:");
    scanf("%d %d %d",&a,&b,&c);
    x=(float)(a+b+c)/3;
    printf("Average of nos is %f",x);
}