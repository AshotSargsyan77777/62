#include "taxtak.h"
#include <iostream>

Taxtak::Taxtak():
Matrix(8, 8)
{
    Mutqagrum();
}

void Taxtak::Mutqagrum() {

    for (int i = 0; i < m_row; i++)
        for (int j = 0; j < m_col; j++)
            m_data[i][j] = 0;

    for (int j = 0; j < 8; j++)
        m_data[1][j] = 1;

    for (int j = 0; j < 8; j++)
        m_data[6][j] = 1;
}

void Taxtak::printTaxtak() const {
    for (int i = 0; i < m_row; i++) {
        for (int j = 0; j < m_col; j++) {
            std::cout << m_data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
