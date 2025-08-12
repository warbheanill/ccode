#include <stdio.h>
// Define the Student struct
struct Student{
    int roll_no;
    char gender;
}; // Alias the struct as Student
typedef struct Student Student;
// Function prototypes
void takeEntries(Student *s);
void printEntries(Student *s);

int main() {
    Student students[3]; // Array of 3 Student structs
    // Take input for students
    takeEntries(students);
    // Print student details
    printEntries(students);
    return 0;
}

void takeEntries(Student *s) {
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter gender (M/F) for student %d: ", i + 1);
        scanf(" %c", &s[i].gender); // Space before %c to consume leftover newline
    }
}

void printEntries(Student *s) {
    int i;
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: Roll No = %d, Gender = %c\n", i + 1, s[i].roll_no, s[i].gender);
    }
}
