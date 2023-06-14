#include <stdio.h>
int main() {
    float n1,n2;
    char operator;
    float result;
    printf("Enter N1: ");
    scanf("%f", &n1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter N2: ");
    scanf("%f", &n2);
    switch (operator) 
    {
	  case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0)
	    {
                result = n1 / n2;
            }
	    else
	    {
                printf("Error: Division by zero\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}

