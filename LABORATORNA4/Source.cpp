
#include "Header.h"


    CubeMatrix::CubeMatrix(int a, int b, int c, int d, int e, int f, int g, int r, int q) {
        matrix[0][0] = a;
        matrix[0][1] = b;
        matrix[0][2] = c;
        matrix[1][0] = d;
        matrix[1][1] = e;
        matrix[1][2] = f;
        matrix[2][0] = g;
        matrix[2][1] = r;
        matrix[2][2] = q;
    }
    CubeMatrix::CubeMatrix(const CubeMatrix& other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = other.matrix[i][j];
            }
        }
    }
    CubeMatrix::CubeMatrix() {


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    void CubeMatrix:: getMatrix() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << matrix[i][j] << "  ";
            }
            std::cout << std::endl;
        }
         }



    int* CubeMatrix:: operator[](int index) {
        return matrix[index];
    }


  CubeMatrix CubeMatrix:: operator *(const CubeMatrix & other) {
        CubeMatrix result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] += matrix[i][j] * other.matrix[i][j];
            }
        }
        return result;
    }

   CubeMatrix CubeMatrix:: operator++() {

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                (*this)[i][j] += 1;
            }
        }
        return *this;
    }

    void CubeMatrix:: find_vyzn() {
        int vyzn = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]);
        std::cout << "vyzhnachnuk: " << vyzn << std::endl;
    }
