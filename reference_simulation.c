#include <stdio.h>

int main() {
    int x = 10;

    int *ref = &x;

    printf("x = %d\n", x);
    printf("*ref = %d\n", *ref);

    *ref = 20;
    printf("x after *ref = %d\n", x);

    
    printf("Address of x: %p\n", (void*)&x);
    printf("Value stored in ref (address of x): %p\n", (void*)ref);
}
