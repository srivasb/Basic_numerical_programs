/* Resolver sistema lineal Ax=B */

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main(){
     Matrix4d A;
     Vector4d B;
A << 0.18,0.60,0.57,0.96,  0.41,0.24,0.99,0.58,  0.14,0.30,0.97,0.66,  0.51,0.13,0.19,0.85;
B  << 1.0,2.0,3.0,4.0;

std::cout<< "Matriz A:\n" << A << std::endl;
std::cout<< "vector B:\n" << B << std::endl;

Vector4d x = A.colPivHouseholderQr().solve(B);
std::cout<< "la solucion es:\n" << x << std::endl;
}
