//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    float marks;

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               name, roll, marks);
    }

    fclose(file);

    return 0;
}