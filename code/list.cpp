#include <iostream>
#include <list>

int main(void) {
   
    // declarer une list de int avec trois elements
    std::list<int> l1 = {2, 8, -11};
    
    // ajouter en debut de liste
    l1.push_front(5);
    
    // ajouter en fin de liste
    l1.push_back(-2);

    // parcourir la liste
    for (int const elt: l1 ) {
        std::cout << elt << " ";
    }
    std::cout << std::endl; // affichera 5 2 8 -11 -2

    // supprimer des elements
    l1.pop_front();
    l1.pop_back();

    // obtenir la taille
    std::cout << l1.size() << std::endl;

    for (int const elt: l1 ) {
        std::cout << elt << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
