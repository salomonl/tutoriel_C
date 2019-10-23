#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* tmp_file = fopen("tmpfile.txt", "a");
    if(! tmp_file) {
        perror("fopen failed");
        return  EXIT_FAILURE;
    }
    fputs("It works\n", tmp_file);
    fclose(tmp_file);

    return  EXIT_SUCCESS;
}
