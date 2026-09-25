#include <stdio.h>

char operator;
int number_one, number_two;

int addition(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    if (y != 0)
    {
        return x / y;
    }
    else
    {
        printf("Dividing by Zero is invalid.\n");
        return -1;
    }
}

int main()
{
    printf("Choose an operator:\n+ (Add)\n- (Subtract)\n* (Multiply)\n/ (Divide)\nYour choice: ");
    scanf("%c", &operator);

    printf("Type your first number: ");
    scanf("%d", &number_one);

    printf("Type your second number: ");
    scanf("%d", &number_two);

    switch (operator)
    {
    case '+':
        printf("%d\n", addition(number_one, number_two));
        break;
    case '-':
        printf("%d\n ", subtract(number_one, number_two));
        break;
    case '*':
        printf("%d\n", multiply(number_one, number_two));
        break;
    case '/':
        printf("%d\n", divide(number_one, number_two));
        break;
    default:
        printf("No valid operation. Try another one.\n");
        break;
    }

    return 0;
}