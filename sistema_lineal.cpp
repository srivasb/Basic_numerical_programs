/* Resolver un sistema de ecuaciones Ax=B */

#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
   Matrix3f A;
   Vector3f b;
   A << 1,2,3,  4,5,6,  7,8,10;
   b << 3, 3, 4;
   cout << "Here is the matrix A:\n" << A << endl;
   cout << "Here is the vector b:\n" << b << endl;
 
   Vector3f x = A.colPivHouseholderQr().solve(b); //Se peude reemplazar con la linea de abajo
   
  /* ColPivHouseholderQR<Matrix3f> dec(A);
Vector3f x = dec.solve(b); */      

   
   cout << "The solution is:\n" << x << endl;
}

