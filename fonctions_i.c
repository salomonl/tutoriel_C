#include <stdio.h>
#include <stdlib.h>

// definition d une fonction toute simple
int add1(int x) {
    return 1 + x;
}

// definition d'une fonction qui ne retourne rien
void wouaf(size_t val) {
    for (size_t i = 0; i < val; ++i) {
        puts("wouaf");
    }
}

int main(void) {
    int y = add1(3);
    printf("%d\n", y);
    wouaf(2);
    // Affichera : 
    // 1
    // wouaf
    // wouaf

    return EXIT_SUCCESS;
}


