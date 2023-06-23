#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;
    struct Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }
    printf("\nData stored for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
    free(students);

    return 0;
}