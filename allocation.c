#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* ptr_to_int = malloc(sizeof(int)); // allocation d un espace memoire 
    // pour un int
    *ptr_to_int = 2; // affectation d une valeur dans cet espace.

    // Do your stuff ...
    printf("%d\n", *ptr_to_int);

    free(ptr_to_int);

}
