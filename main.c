#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mult(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}

int main()
{
    int op;
    int x, y;

    printf("Choose an operator:\n \
           1 - Add\n \
           2 - Subtract\n \
           3 - Multiply\n \
           4 - Divide\n \
           Your choice: ");
    scanf("%d", &op);

    printf("Type your first number: ");
    scanf("%d", &x);

    printf("Type your second number: ");
    scanf("%d", &y);

    switch (op)
    {
    case 1:
        printf("%d\n", add(x, y));
        break;
    case 2:
        printf("%d\n ", sub(x, y));
        break;
    case 3:
        printf("%d\n", mult(x, y));
        break;
    case 4:
        printf("%d\n", mult(x, y));
        break;
    default:
        printf("No valid operation. Try another one.\n");
        break;
    }

    return 0;
}
