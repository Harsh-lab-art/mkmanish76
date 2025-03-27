#include <stdio.h> 
struct Student{ // user defined data type
    int roll;
    char grade; 
    float per;
};    
    int main(){
    struct Student S={10,'A',78.5};
    printf("Roll=%d,Grade=%c,Per=%f',S.roll,S.grade,S.per"); 
    return 0;
    }