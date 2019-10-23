#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main(void) {
    int a = 2;
    int b = 3; // je veux echanger les valeurs de a et b.

    swap(a, b); // ahaha, j ai reussi.

    printf("a = %d, b = %d\n", a, b);
    // a = 2, b = 3 : gneee ?

    return EXIT_SUCCESS;
}
