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
Matrix::Matrix(const Matrix& other):
m_row(other.m_row),
m_col(other.m_col)
{
    m_data = new int*[m_row];
    for (int i = 0; i < m_row; i++) {
        m_data[i] = new int[m_col];
        for(int j=0;j<m_col;j++)
            m_data[i][j]=other.m_data[i][j];
    }
}

Matrix::Matrix(Matrix&& other) noexcept :
m_row(other.m_row),
m_col(other.m_col),
m_data(other.m_data)
{
    other.m_data = nullptr;
    other.m_row = 0;
    other.m_col = 0;
}

Matrix& Matrix::operator=(const Matrix& other){
    if(this!=&other){
        for(int i=0;i<m_row;i++)
            delete[] m_data[i];
        delete[] m_data;

        m_row=other.m_row;
        m_col=other.m_col;

        m_data = new int*[m_row];
        for (int i = 0; i < m_row; i++) {
            m_data[i] = new int[m_col];
            for(int j=0;j<m_col;j++)
                m_data[i][j]=other.m_data[i][j];
        }
    }
    return *this;
}

Matrix& Matrix::operator=(Matrix&& other) noexcept {
    if(this!=&other){
        for(int i=0;i<m_row;i++)
            delete[] m_data[i];
        delete[] m_data;

        m_row = other.m_row;
        m_col = other.m_col;
        m_data = other.m_data;

        other.m_data = nullptr;
        other.m_row = 0;
        other.m_col = 0;
    }
    return *this;
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
