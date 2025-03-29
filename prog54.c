#include <stdio.h> 
int mystrlen(char *); 
int main(){ 
    char str[30];
    int x;
    printf("Enter a string:"); 
    gets(str); 
    x=mystrlen(str);
    printf("String is %s\nits length is %d",str,x); 
    return 0;
}
    int mystrlen(char *p){
         int i;
        for(i=0;*(p+i);i++);
    return i;
    }
    