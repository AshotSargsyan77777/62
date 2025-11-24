#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
protected:
    int m_row;
    int m_col;
    int** m_data;
public:
    Matrix(int row, int col);

    Matrix(const Matrix& other);

    Matrix(Matrix&& other)noexcept;

    Matrix& operator=(const Matrix& other);

    Matrix& operator=(Matrix&& other)noexcept;

    virtual ~Matrix();

    void setValue(int row,int col,int value);
    int getValue(int row,int col) const;


};


#endif