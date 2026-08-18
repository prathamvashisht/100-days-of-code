
//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Read the coefficients from the user
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        return 1;
    }

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Categorize and calculate roots based on the discriminant
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // Print the larger root first to match sample output format
        if (root1 >= root2)
        {
            printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
        }
        else
        {
            printf("Roots are real and different: %.0f, %.0f\n", root2, root1);
        }
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else
    {
        printf("Roots are complex\n");
    }

    return 0;
}
