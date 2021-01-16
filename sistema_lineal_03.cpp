/*Resolver la ecuacion Ax=b*/

#include <iostream>
#include <Eigen/Dense>
#include <cmath>

using namespace Eigen;

int main(){
Matrix3d A;
 A << 4.0,-2.0,1.0,  3.0,6.0,-4.0,  2.0,1.0,8.0;
 std::cout << "Matriz A:\n" << A << std::endl;

Vector3d b;
b << 20.0,-30.0,40.0;
std::cout << "vector b:\n" << b << std::endl;

Vector3d x = A.colPivHouseholderQr().solve(b);
//Vector3d x = A.ldlt().solve(b);   //NO ES EXACTO

 /*ColPivHouseholderQR<Matrix3d> dec(A);
Vector3d x = dec.solve(b);*/


std::cout << "vector x:\n" << x << std::endl;

}
