#include<stdio.h>

int main(){
    int p,c,m;
    float percent;

    printf("Enter the marks of 3 sub:");
    scanf("%d %d %d",&p,&c,&m);

    printf("your total marks is %d\n",(p + c + m));

    percent=((p+c+m)/300.0)*100;
    printf("percent is:.2%f\n",percent);

          if(percent>75){
    printf("grade is:A\n");
   }else if(percent>60){
    printf("grade is:B\n");
    }else if(percent>48){
    printf("grade is:C\n");
    }else if(percent>33){
     printf("grade is:D\n");
    } else {   
    printf("grade is: F\n");
    return 0;
}