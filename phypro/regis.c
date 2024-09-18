#include <stdio.h>
int main(){
    char first[30];
    char last[30];
    char stud[8];
    int dd, mm, yyyy;
    float gpa;
    scanf("%s", first);
    scanf("%s", last);
    scanf("%s", stud);
    scanf("%d/%d/%d/", &dd, &mm, &yyyy);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\nID: %s\nDOB: %02d-%02d-%02d\nGPA: %.2f", first, last, stud, dd, mm, yyyy, gpa);
    return 0;
}