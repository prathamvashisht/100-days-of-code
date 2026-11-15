//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

void printStudent(struct Student student)
{
    printf("Name: %s | Roll: %d | Marks: %d\n",
           student.name,
           student.roll,
           student.marks);
}

int main()
{
    struct Student student;

    scanf("%s %d %d",
          student.name,
          &student.roll,
          &student.marks);

    printStudent(student);

    return 0;
}