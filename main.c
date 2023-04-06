#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float square_root(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}

float average(double numbers[], int count) {
    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return sum / count;
}

int main() {
    int choice, a, b, m, count = 0;
    double numbers[100], input;
    float result;

    printf("Enter your choice:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square root\n6. Power\na. Calculate Average\n");
    scanf("%c", &choice);

    if (choice == 'a') {
        printf("Enter the numbers to be averaged (press any other key to stop):\n");
        while (1) {
            if (scanf("%lf", &input) != 1) {
                break;
            }
            numbers[count] = input;
            count++;
        }
        if (count == 0) {
            printf("Error: No numbers entered");
        } else {
            result = average(numbers, count);
            printf("Result: %f", result);
        }
    } else if (choice == '1') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        result = add(a, b);
        printf("Result: %f", result);
    } else if (choice == '2') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        result = subtract(a, b);
        printf("Result: %f", result);
    } else if (choice == '3') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        result = multiply(a, b);
        printf("Result: %f", result);
    } else if (choice == '4') {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            result = divide(a, b);
            printf("Result: %f", result);
        }
    } else if (choice == '5') {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (a < 0) {
            printf("Error: Cannot find square root of a negative number");
        } else {
            result = square_root(a);
            printf("Result: %f", result);
        }
    } else if (choice == '6') {
        printf("Enter a number and power: ");
        scanf("%d %d", &a, &m);
        result = power(a, m);
        printf("Result: %f", result);
    } else {
        printf("Error: Invalid choice");
    }

    return 0;
}

