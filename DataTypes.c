#include <stdio.h>

int main()
{
    int myNum = 15;          // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My favorite letter is: %c", 'D');

    int x = 12, z;
    int y = x;
    printf("%d", y);
    x = 13;
    printf("%d", y);

    x = y = z = 50;
    printf("%d", x + y + z);

    myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits
    printf("%.0f\n", myFloatNum); // rounds it off

    printf("size of int : %zu bytes\n", sizeof(myNum));
    printf("size of float : %zu bytes\n", sizeof(myFloatNum));
    printf("size of char : %zu bytes\n", sizeof(myLetter));

    return 0;
}