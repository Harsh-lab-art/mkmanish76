#include <stdio.h>
 struct Student{ // user defined data type 
    int roll;
    char grade; 
    float per;
 };
    int main(){ 
        struct Student S;
     S.roll=10;
     S.grade='A';
     S.per=78.5;
    printf("Roll=%d,Grade=%c,Per=%f",S.roll,S.grade,S.per);
     return 0;
    }