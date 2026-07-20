#include <stdio.h>

int globalVar = 100;

void staticDemo()
{
    static int staticVar = 0;  
    staticVar++;
    printf("Static Variable = %d\n", staticVar);
}

int main()
{
    int localVar = 10;

    register int registerVar = 20;

    printf("Local Variable = %d\n", localVar);
    printf("Global Variable = %d\n", globalVar);
    printf("Register Variable = %d\n", registerVar);

    printf("\nCalling staticDemo() three times:\n");
    staticDemo();
    staticDemo();
    staticDemo();

    return 0;
}
