#include <iostream>
#include "Header.h"



int main()
{

    int a, b, c, d, e, f, g, r, q;

    std::cout << "enter elements of matrix 3*3:" << std::endl;
    std::cout << "[0][0]:" << std::endl;
    std::cin >> a;
    std::cout << "[0][1]:" << std::endl;
    std::cin >> b;
    std::cout << "[0][2]:" << std::endl;
    std::cin >> c;
    std::cout << "[1][0]:" << std::endl;
    std::cin >> d;
    std::cout << "[1][1]:" << std::endl;
    std::cin >> e;
    std::cout << "[1][2]:" << std::endl;
    std::cin >> f;
    std::cout << "[2][0]:" << std::endl;
    std::cin >> g;
    std::cout << "[2][1]:" << std::endl;
    std::cin >> r;
    std::cout << "[2][2]:" << std::endl;
    std::cin >> q;

    CubeMatrix M1(a, b, c, d, e, f, g, r, q);
    std::cout << "matrix M1:" << std::endl;
    M1.getMatrix();

    CubeMatrix M2(M1);
    std::cout << "matrix M2:" << std::endl;
    M2.getMatrix();

    CubeMatrix M3;
    std::cout << "matrix M3:" << std::endl;
    M3.getMatrix();

    M3 = M1 * M2;
    std::cout << "the result of multipy (M3):" << std::endl;
    M3.getMatrix();
    ++M3;
    std::cout << "here is incriminated matrix (M3):" << std::endl;
    M3.getMatrix();
    M3.find_vyzn();
}
