/* Resolver los autovalores de una matriz */

#include <iostream> 
#include <Eigen/Dense>

using namespace Eigen;

int main(){
  
     Matrix3d A;
     A << -2.0, 2.0,-3.0,   2.0,1.0,-6.0,  -1.0,-2.0,0.0;
     std::cout<<"matriz A:\n" << A << std::endl;

     SelfAdjointEigenSolver<Matrix3d> eigensolver(A);
   
     if (eigensolver.info() != Success) abort();
   
   std::cout << "Autovalores de A:\n" << eigensolver.eigenvalues() << std::endl;
   std::cout << "matriz de autovectores de A:\n"<< eigensolver.eigenvectors() <<std::endl;
}
