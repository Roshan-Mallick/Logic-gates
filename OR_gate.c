#include <stdio.h>

int main() {
    int A, B, output;

    printf("Enter A (0 or 1): ");
    scanf("%d", &A);

    printf("Enter B (0 or 1): ");
    scanf("%d", &B);

    if (A != 0 || B != 0)
        output = 1;
    else
        output = 0;

    printf("OR Gate Output = %d\n", output);

    return 0;
}
