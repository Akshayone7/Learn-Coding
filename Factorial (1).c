#include <stdio.h>
#include <stdlib.h> // for atoi()

int main(int argc, char *argv[]) {
    // Check if the user provided an argument
    if (argc < 2) {
        printf("Please provide a number as a command-line argument.\n");
        return 1; // Exit with error code if no argument is provided
    }

    // Convert the argument to an integer
    int num = atoi(argv[1]);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is undefined for negative numbers.\n");
        return 1; // Exit with error code if negative number
    }

    int fact = 1; // Initialize fact to 1

    // Calculate the factorial using a loop
    for (int i = 1; i <= num; i++) {
        fact *= i; // Multiply fact by i
    }

    // Print the result
    printf("Factorial of %d is: %d\n", num, fact);
    return 0;
}
