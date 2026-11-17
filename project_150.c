//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main()
{
    struct Employee employee;

    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.id);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d",
          &employee.joiningDate.day,
          &employee.joiningDate.month,
          &employee.joiningDate.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           employee.name,
           employee.id,
           employee.joiningDate.day,
           employee.joiningDate.month,
           employee.joiningDate.year);

    return 0;
}