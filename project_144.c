//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main(void)
{
    char input[20];
    struct Person person;

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        person.gender = MALE;
    else
        person.gender = FEMALE;

    if (person.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}