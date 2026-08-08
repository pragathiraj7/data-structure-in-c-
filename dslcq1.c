#include <stdio.h>

int global = 10;   // Global variable

void test()
{
    int local = 20;          // Local variable
    static int stat = 30;    // Static variable
    register int reg = 40;   // Register variable

    printf("Local variable   = %d\n", local);
    printf("Global variable  = %d\n", global);
    printf("Static variable  = %d\n", stat);
    printf("Register variable = %d\n", reg);

    stat++;
}

int main()
{
    test();
    printf("\nCalling test() again:\n");
    test();

    return 0;
}