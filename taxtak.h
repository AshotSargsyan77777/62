
#ifndef TAXTAK_H
#define TAXTAK_H

#include "matrix.h"

class Taxtak : public Matrix {
public:
    Taxtak();  
    Taxtak (const Taxtak& other) = default;       
    Taxtak(Taxtak&& other) noexcept = default;
    Taxtak& operator=(const Taxtak& other) = default;
    Taxtak& operator=(Taxtak&& other) noexcept = default;

    
    void Mutqagrum();
    void printTaxtak() const;
};

#endif
