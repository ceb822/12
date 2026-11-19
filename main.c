#include <stdio.h>
#include <string.h>


struct student {
    int ID;
    char name[30];
    float grade;
}; 

int main(void)
{
    struct student s1 = {100, "eunbi", 4.3}; 

    s1.ID = 101;
    strcpy(s1.name, "eunbi");
    s1.grade = 2.2;

    printf("ID:%i, name:%s, grade:%.1f\n", s1.ID, s1.name, s1.grade);
    return 0;
}