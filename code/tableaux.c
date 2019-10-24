#include <stdio.h>
#include <stdlib.h>

int main(void) {

    double A1[12]; // A1 est un tableau de taille 12 non initialise
    for (size_t i = 0; i < 12; ++i) {
        printf("%f ", A1[i]);
    }
    printf("\n"); // l affichage depend des compileurs

    int A2[2] = {1, 2}; // A2 est un tableau de int de taille 2.
    for (size_t i = 0; i < 2; ++i) {
        printf("%d ", A2[i]);
    }
    printf("\n"); // affichera 1 2

    double A3[] = {[2] = 3.0, [1] = 5.0, [3] = 4.0}; 
    // le compilateur allouera automatiquement un tableau A3 de taille 4, 
    // avec A3[0] non initialise. 
    for (size_t i = 0; i < 4; ++i) {
        printf("%f ", A3[i]);
    }
    printf("\n"); // affichera ?? 5.0 3.0 4.0

    int A[5] = {1, 2, 3, 4, 5}; // A contient les valeurs 1, 2, 3, 4, 5
    A[2] += 1; // A contient maintenant les valeurs 1, 2, 4, 4, 5

    // parcours du tableau
    for  (size_t i = 0; i < 5; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n"); // Affichera 1, 2, 4, 4, 5 

    //A[5] += 2; // Error out of bounds !!! Plantera a l execution du programme.


    return EXIT_SUCCESS;

}
