#include <stdio.h>
struct Student{
    int roll_no;
    char gender;
};
typedef struct Student Students;
void takeEntries(Students *itstuds);
void printEntries(Students *itstuds);
int main() {
    // Write C code here
    Students itstudents[2];
    takeEntries(itstudents);
    printEntries(itstudents);
    return 0;
}

void takeEntries(Students *itstuds){
    int i=0;
    for(i=0; i<2; i++){
        printf("Enter Roll Number and Gender");
        scanf("%d %c", &itstuds[i].roll_no, &itstuds[i].gender);
    }
}

void printEntries(Students *itstuds){
    int j=0;
    for(j=0; j<2; j++){
        printf("%d %c", itstuds[j].roll_no, itstuds[j].gender);
    }
}
