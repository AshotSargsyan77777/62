#include "matrix.h"
#include <iostream>

Matrix::Matrix(int row, int col):
m_row(row),
m_col(col)
{
    m_data = new int*[m_row];
    for (int i = 0; i < m_row; i++)
        m_data[i] = new int[m_col]{0};
}

Matrix::~Matrix() {
    for (int i = 0; i < m_row; i++)
        delete[] m_data[i];
    delete[] m_data;
}

void Matrix::setValue(int row, int col, int value) {
    m_data[row][col] = value;
}

int Matrix::getValue(int row, int col) const {
    return m_data[row][col];
}
