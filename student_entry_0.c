#include <stdio.h>

void takeEntries(int roll_no[], char gender[]);
void printEntries(int roll_no[], char gender[]);

int main() {
    int roll_no [2];
    char gender [2];
    takeEntries(roll_no, gender);
    printEntries(roll_no, gender);
    return 0;
}

void takeEntries(int roll_no[], char gender[]) {
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter Roll Number and Gender: ");
        scanf("%d %c", &roll_no[i], &gender[i]);
    }
}

void printEntries(int roll_no[], char gender[]) {
    int i;
    printf("Here is the Entered data: ");
    for (i = 0; i < 2; i++) {
        printf("\n%d %c", roll_no[i], gender[i]);
    }
}
