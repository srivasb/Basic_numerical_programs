#include <iostream>
#include <cstdio>
#include <cmath>




const int NMAX=50;

double sin_sum(const double x, const  double N );

int main(){

  //std::cout << sin_sum(0, NMAX) << std::endl;


  double x;         //para hacer la tabla en la terminal
  double dx = 0.2;

  for (int ii = 0; ii <= 30; ++ii) {
    x = ii*dx;
    std::cout << x << "\t" << std::fabs((sin_sum(x, NMAX) - std::sin(x))/std::sin(x)) << std::endl; 
  }
  
  return 0;
}


double sin_sum(const double x, const double N)
{

  double sum = x;

  double term = x;

  for (int  n=2; n<=N; n++) {

    term *= -x*x/(2*n+1)/(2*n);
  sum += term;
}

return sum;
}

