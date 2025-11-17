#include "taxtak.h"
#include <iostream>

Taxtak::Taxtak()
    : Matrix(8, 8)      
{
    Mutqagrum();
}

void Taxtak::Mutqagrum() {
    
    for (int i = 0; i < m_row; i++)
        for (int j = 0; j < m_col; j++)
            m_data[i][j] = 0;

    
    m_data[0][0] = 2;  
    m_data[0][1] = 3;  
    m_data[0][2] = 4;  
    m_data[0][3] = 6;  
    m_data[0][4] = 5;  
    m_data[0][5] = 4;  
    m_data[0][6] = 3;  
    m_data[0][7] = 2;  
    m_data[0][8] = 1;  
    m_data[1][0] = 1;  
    m_data[1][1] = 1;  
    m_data[1][2] = 1;  
    m_data[1][3] = 1;  
    m_data[1][4] = 1;  
    m_data[1][5] = 1;  
    m_data[1][6] = 1;  
    m_data[1][7] = 1;  
    m_data[7][0] = 2;  
    m_data[7][1] = 3;  
    m_data[7][2] = 4;  
    m_data[7][3] = 5;  
    m_data[7][4] = 6;  
    m_data[7][5] = 4;  
    m_data[7][6] = 3;  
    m_data[7][7] = 6;  
    m_data[6][0] = 2;  
    m_data[6][1] = 1;  
    m_data[6][2] = 1;  
    m_data[6][3] = 1;  
    m_data[6][4] = 1;  
    m_data[6][5] = 1;  
    m_data[6][6] = 1;  
    m_data[6][7] = 1;  

}

void Taxtak::printTaxtak() const {
    for (int i = 0; i < m_row; i++) {
        for (int j = 0; j < m_col; j++) {
            std::cout << m_data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
