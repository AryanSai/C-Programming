#include <stdio.h>

int main()
{
    int x = 1, y = 2;
    printf("and : %d\n", x & y);
    printf("or : %d\n", x | y);
    printf("xor : %d\n", x ^ y);
    printf("toggle bits : %d\n", (~3));

    int a = 0;
    printf("Value of a without using NOT operator: %d\n", a);
    printf("Inverting using NOT operator (with sign bit): %d\n", ~a);
    printf("Inverting using NOT operator (without sign bit): %d\n", !a);

    printf("Left-shift operations: \n");
    printf("%d\n", 2 << 1);
    return 0;
}