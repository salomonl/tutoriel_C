#include <fstream>
#include <iostream>

int main(void) {
    std::ofstream outf;
    outf.open("test.txt");
    
    // if does not work, return a failure
    if (!outf.is_open()) {
        std::cerr << "CA NE MARCHE PAS !!!!!!!" << std::endl;
        exit(1);
    }

    // sinon on ecrit dans le fichier deux lignes
    outf << "J'espere que ca marche" << std::endl;
    outf << "Miracle ?" << std::endl;

    return EXIT_SUCCESS;

}
