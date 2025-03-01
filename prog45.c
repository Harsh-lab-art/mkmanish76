#include <stdio.h>
float average(void);
int main(){ 
    float d;
    d=average();
    printf("Average of nos is %f",d); 
    return 0;
}
float average(){ 
    int a,b,c;
    float x;
    printf("Enter 3 int:");
    scanf("%d %d %d",&a,&b,&c); 
    x=(float)(a+b+c)/3;
    return x;
}    