#include <stdio.h>
#include <stdlib.h>

void working_swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a = 2, b = 3;
    working_swap(&a, &b); // on fournit l adresse en parametre de la 
    // fonction.
    printf("a = %d, b =%d\n", a, b);
    // a = 3, b = 2

    return EXIT_SUCCESS;	
}
