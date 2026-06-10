#include <stdio.h>

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed!\n");
        return 0;
    }

    return a / b;
}

// Selector function
float calculate(float a, float b, char op)
{
    switch(op)
    {
        case '+':
            return add(a, b);

        case '-':
            return subtract(a, b);

        case '*':
            return multiply(a, b);

        case '/':
            return divide(a, b);

        default:
            printf("Invalid operator!\n");
            return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = calculate(num1, num2, op);

    printf("Result = %.2f\n", result);

    return 0;
}