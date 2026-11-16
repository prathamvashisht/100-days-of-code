//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student findTopStudent(struct Student students[], int n)
{
    struct Student top = students[0];

    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > top.marks)
        {
            top = students[i];
        }
    }

    return top;
}

int main()
{
    struct Student students[3];
    struct Student topStudent;

    printf("Enter details of 3 students:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter name, roll number, and marks for student %d:\n", i + 1);
        scanf("%s %d %d",
              students[i].name,
              &students[i].roll,
              &students[i].marks);
    }

    topStudent = findTopStudent(students, 3);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name,
           topStudent.roll,
           topStudent.marks);

    return 0;
}