#include <stdio.h>

char operator;
int number_one, number_two;

void addition(int x, int y)
{
    printf("%d\n", x + y);
}

void subtract(int x, int y)
{
    printf("%d\n", x - y);
}

void multiply(int x, int y)
{
    printf("%d\n", x * y);
}

int divide(int x, int y)
{
    if (y != 0)
    {
        printf("%d\n", x / y);
        return 0;
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
        addition(number_one, number_two);
        break;
    case '-':
        subtract(number_one, number_two);
        break;
    case '*':
        multiply(number_one, number_two);
        break;
    case '/':
        divide(number_one, number_two);
        break;
    default:
        printf("No valid operation. Try another one.\n");
        break;
    }

    return 0;
}