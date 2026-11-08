//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char roleName[10];
    enum Role role;

    scanf("%s", roleName);

    if (strcmp(roleName, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(roleName, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;

        case USER:
            printf("Welcome User!\n");
            break;

        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}