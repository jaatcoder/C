#include<stdio.h>
#include<stdlib.h>
struct studentdata{
    int stu_id;
    float stu_gpa;
};
int main(){
    struct studentdata *st;
    st=(struct studentdata*)malloc(10*sizeof(struct studentdata));
    return 0;
}