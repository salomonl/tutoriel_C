#include <stdio.h>
#include <stdlib.h>

struct point_struct {
    int x;
    int y;
}; // ne pas oublier le point virgule

int main(void) {

    // declaration d une variable point_struct
    struct point_struct p = {
        .x = 2,
        .y = 4
    };

    p.x = 3;
    printf("x = %d, y = %d\n", p.x, p.y); // x = 3, y = 4

    // manipulation des structures par pointeur
    struct point_struct* ptr_to_p = &p;
    (*ptr_to_p).x = 4;
    printf("x = %d, y = %d\n", p.x, p.y); // x = 4, y = 4

    return EXIT_SUCCESS;
}
