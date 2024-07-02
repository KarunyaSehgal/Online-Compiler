#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    myFunction(); // Implicit declaration of myFunction, which is allowed in C but not in C++
    return 0;
}

void myFunction() {
    printf("This is myFunction!\n");
}