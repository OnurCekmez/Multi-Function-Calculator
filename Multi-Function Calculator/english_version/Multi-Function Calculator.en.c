#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Define the clear screen command based on the operating system
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int main() {
    int i, choice, num1, num2, num3, num4; // Variables for integer operations
    float a, b, c; // Variables for floating-point operations
    char str[30], proceed; // String input and operation continuation control

    // Main Menu Title
    printf("*******************\n");
    printf("**     MENU     **\n");
    printf("*******************\n\n");

    // Main loop
    while (1) {
        printf("Select the operation you want to perform:\n\n");
        printf("1- Calculate the power of a number\n");
        printf("2- Calculate the area of a triangle\n");
        printf("3- Calculate the perimeter of a rectangle\n");
        printf("4- Perform basic arithmetic operations\n");
        printf("5- Print a word or sentence multiple times\n");
        printf("0- Exit the program\n\n");

        // User selection input
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n\n");

        switch (choice) {
            case 0: // Exit the program
                printf("Press any key to exit the program...\n");
                exit(0);
                break;

            case 1: { // Calculate the power of a number
                printf("Enter the base number: ");
                scanf("%d", &num1);
                printf("Enter the exponent: ");
                scanf("%d", &num2);
                num3 = 1;

                // Loop to calculate the power
                for (i = 0; i < num2; i++) {
                    num3 = num3 * num1;
                }

                printf("Result: %d\n\n", num3);
                break;
            }

            case 2: { // Calculate the area of a triangle
                printf("Enter the base length of the triangle (cm): ");
                scanf("%f", &a);
                printf("Enter the height of the triangle (cm): ");
                scanf("%f", &b);

                c = (a * b) / 2;
                printf("Area of the triangle: %.2f cm^2\n\n", c);
                break;
            }

            case 3: { // Calculate the perimeter of a rectangle
                printf("Enter the length of the rectangle: ");
                scanf("%d", &num1);
                printf("Enter the width of the rectangle: ");
                scanf("%d", &num2);

                num3 = (num1 + num2) * 2; // Perimeter formula: 2 * (length + width)
                printf("Perimeter of the rectangle: %d cm\n\n", num3);
                break;
            }

            case 4: { // Perform basic arithmetic operations
                printf("Addition(1)\nSubtraction(2)\nMultiplication(3)\nDivision(4)\n");
                printf("Enter your choice: ");
                scanf("%d", &num1);

                switch (num1) {
                    case 1: // Addition
                        printf("Enter the first number: ");
                        scanf("%d", &num2);
                        printf("Enter the second number: ");
                        scanf("%d", &num3);
                        num4 = num2 + num3;
                        printf("Result: %d\n\n", num4);
                        break;

                    case 2: // Subtraction
                        printf("Enter the first number: ");
                        scanf("%d", &num2);
                        printf("Enter the second number: ");
                        scanf("%d", &num3);
                        num4 = num2 - num3;
                        printf("Result: %d\n\n", num4);
                        break;

                    case 3: // Multiplication
                        printf("Enter the first number: ");
                        scanf("%d", &num2);
                        printf("Enter the second number: ");
                        scanf("%d", &num3);
                        num4 = num2 * num3;
                        printf("Result: %d\n\n", num4);
                        break;

                    case 4: // Division
                        printf("Enter the dividend: ");
                        scanf("%f", &b);
                        printf("Enter the divisor: ");
                        scanf("%f", &c);
                        a = b / c;
                        printf("Result: %.2f\n\n", a);
                        break;

                    default: // Invalid choice in arithmetic operations
                        printf("Invalid selection!\n\n");
                        break;
                }
                break;
            }

            case 5: { // Print a word or sentence multiple times
                printf("Enter the word or sentence to print: ");
                scanf(" %[^\n]s", str);
                printf("Enter the number of times to print: ");
                scanf("%d", &num1);
                printf("Print inline (1) or in new lines (2): ");
                scanf("%d", &num2);

                if (num2 == 1) { // Inline printing
                    for (i = 0; i < num1; i++) {
                        printf("%s ", str);
                    }
                } else if (num2 == 2) { // New line printing
                    for (i = 0; i < num1; i++) {
                        printf("%s\n", str);
                    }
                } else { // Invalid choice
                    printf("Invalid input!\n\n");
                }
                break;
            }

            default: // Invalid main menu choice
                printf("Invalid selection!\n\n");
                break;
        }

        // Ask if the user wants to perform a new operation or exit
        printf("\nPress (e/E) to perform a new operation, (q/Q) to exit: ");
        scanf(" %c", &proceed);
        if (proceed == 'e' || proceed == 'E') {
            system(CLEAR); // Clear the screen
            return main;
        } else if (proceed == 'q' || proceed == 'Q') {
            printf("Press any key to exit the program...\n");
            exit(0);
        }
    }
    return 0;
}
