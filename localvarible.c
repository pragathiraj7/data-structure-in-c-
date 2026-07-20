#include<stdio.h>
#include <stdio.h>

// Global variable
int globalVar = 100;

// Function to demonstrate static variable
void staticDemo()
{
    static int staticVar = 0;   // Initialized only once
    staticVar++;
    printf("Static Variable = %d\n", staticVar);
}

int main()
{
    // Local variable
    int localVar = 10;

    // Register variable
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