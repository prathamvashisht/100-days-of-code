#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Reading the three side lengths of the triangle
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        return 1; // Exit if the input format is incorrect
    }

    // Checking the type of triangle
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}
