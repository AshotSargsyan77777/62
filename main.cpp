
#include <iostream>
#include "taxtak.h"  

int main() {
    std::cout << "Minchev object stexcely = " << Matrix::getCount() << std::endl;

    Taxtak board1;
    std::cout << "1 taxtak heto = " << Matrix::getCount() << std::endl;

    {
        Taxtak board2;
        std::cout << "2 taxtak heto  = " << Matrix::getCount() << std::endl;
    } 

    std::cout << "mnum a board1= " << Matrix::getCount() << std::endl;

    return 0;
}
