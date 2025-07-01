#include <stdio.h>

int main()
{
    int x = 10, y = 3, z;
    z = x / y;
    printf("%d\n", z);

    float zz = x / y;
    printf("%f\n", zz);

    float div = (float)x / y; // explicit conversion
    printf("%f\n", div);

    float myFloat = 9;
    printf("%f\n", myFloat); // implicit conversion

    const int myNum = 15; // myNum will always be 15
    // myNum = 10;           // error: assignment of read-only variable 'myNum'
    
    return 0;
}