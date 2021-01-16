/* Inversa de una matriz A */

#include <iostream>
#include <Eigen/Dense>
#include <cmath>

using namespace Eigen;

int main(){
Matrix3d A;

A << 4.0,-2.0,1.0,  3.0,6.0,-4.0,  2.0,1.0,8.0;

std::cout << "Matriz A:\n" << A << std::endl;
std::cout << "inversa de A:\n"<< A.inverse() << std::endl;
std::cout << "Comprobación 1 de la iversa:\n" << A * A.inverse() << std::endl;
std::cout << "Comprobación 2 de la iversa:\n" << A.inverse() * A << std::endl;

double x = 1.0/263.0;
Matrix3d B;
B << 52.0,17.0,2.0,  -32,30,19.0,  -9.0,-8.0,30.0;
std::cout << "Matriz B:\n" << B*x << std::endl;
}
