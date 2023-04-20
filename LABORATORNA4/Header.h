#pragma once
#include <iostream>

class CubeMatrix {

    int matrix[3][3];

public:

    CubeMatrix(int a, int b, int c, int d, int e, int f, int g, int r, int q);
    CubeMatrix(const CubeMatrix& other);
    CubeMatrix();
    void getMatrix();
    int* operator[](int index);
    CubeMatrix operator *(const CubeMatrix& other);
    CubeMatrix operator++();
    void find_vyzn();
};