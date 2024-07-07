#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    int *a = &x; // Pointer 'a' pointing to the address of 'x'
    int *b = &y; // Pointer 'b' pointing to the address of 'y'

    printf("Value at the memory location pointed by 'a': %d\n", *a); // Prints the value of 'x'
    printf("Value at the memory location pointed by 'b': %d\n", *b); // Prints the value of 'y'

    return 0;
}