#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int M1[5][4]; // M1 est un tableau de int de dimensions 5*4 non initialise
    printf("%d\n", M1[2][3]); // depend des compilateurs

    double M2[2][5][3]; // M2 est un tableau de double de dimensions 2 * 5 * 3
    printf("%f\n", M2[1][3][2]); // depend des compilateurs

    // initialisation d'un tableau de caracteres de dimensions 2 * 3 
    char M3[2][5] = {
        {'H', 'e', 'l', 'l', 'o'},
        {'W', 'o', 'r', 'l', 'd'} 
    };
    // le parcourir
    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 5; ++j) {
            printf("%c", M3[i][j]);
        }
        printf("\n");
    }

    // initialisation d'un tableau de int de dimensions 3 * 4
    int M4[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // le parcourir
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            printf("%d ", M4[i][j]);
        }
        printf("\n");
    }

    //printf("%d\n", M4[3][2]); // out of bounds access ! plantera lors de l'execution.

    return EXIT_SUCCESS;
}

