#include<stdio.h>
struct student {//user defined data type 
    int roll;
    char grade; 
    float per;
};
void display (struct student);
int main(){
    struct student s;
    printf(" Enter roll no.:\n Enter grade: \n Enter per:");
    scanf("%d %c %f",&s.roll,&s.grade,&s.per);
    display(s);
    return 0;
}
void display (struct student s){
    printf("Roll=%d,Grade=%c,Per=%f",s.roll,s.grade,s.per);
}