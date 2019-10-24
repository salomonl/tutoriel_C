#include <stdlib.h>
#include <stdio.h>

int main(void) {
    for (size_t i = 0 ; i < 5; ++i) {
        printf("%zu ", i);
    }
    printf("\n"); // affichera 0 1 2 3 4

    size_t inc = 5;
    while (inc > 0) {
        puts("Attention");
        --inc;
    }
    // affichera 5 fois attention

    return EXIT_SUCCESS;
}
