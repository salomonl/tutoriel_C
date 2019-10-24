#include <fstream>
#include <iostream>
#include <string>

int main(void) {

    // Pour lire a partir d un fichier on utilise ifstream
    std::ifstream inf("test.txt");

    // si ca ne marche pas on leve une exception
    if (!inf) {
        // on affiche et on quitte
        std::cerr << "L ordinateur a qq chose contre moi " << std::endl;
        exit(1);
    }
 
    // Puis on boucle sur le fichier
    while (inf) {
        // on lit du fichier et on ecrit
        std::string strInput;
        // std::cin >> strInput; est case-sensitive aux espaces
        // lire ligne par ligne: std::cin >> strInput est  
        getline(inf, strInput);
        std::cout << strInput << std::endl;
    }
    
    return EXIT_SUCCESS;
	
    // Des qu il quitte le bloc, le fichier sera automatiquement ferme
} 
