#include<stdio.h>
int main()
{
int n,Remender, sum=0;
printf("Enter an int");
scanf ("%d",&n);
while(n>0)
{
Remender=n%10;
sum+=Remender ;
n=n/10;
}
printf ("digits is %d",sum);
return 0;
}