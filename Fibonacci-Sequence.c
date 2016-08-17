#include <stdio.h>

int main()
{
    int fib = 0;

    printf("%i, ",fib);

    fib = fib + 1; //Fib == 1 at this point //

    printf("%i, ",fib);
    int temp = 0;

    while(fib!=8)           //This loop creates a temp variable 'temp' and continues giving it the previous value of fib//
    {
        fib = fib + temp;
        printf("%i, ",fib);
        temp = fib - temp;
    }

    //Need to go 0,1,1,2,3,5,8,13,etc.//
    //Start 0, add 1, then continue adding previous//

    return;
}
