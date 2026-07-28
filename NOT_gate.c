#include <stdio.h>

int main()
{
    int A;

    printf("Enter 0 or 1 for NOT Gate: ");
    scanf("%d", &A);

    if (A == 0 || A == 1)
    {
        printf("Complement of A is %d\n", 1 - A);
    }
    else
    {
        printf("Enter only 0 or 1.\n");
    }

    return 0;
}
