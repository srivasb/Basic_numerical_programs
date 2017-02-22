#include <iostream>
#include <cstdio>
#include <cmath>

typedef double REAL;

const int NMAX = 10000;

REAL sumA(int N);
REAL sumB(int N);
REAL sumC(int N);

int main(void)
{
  double d1, d2;
  for (int n = 1; n <= NMAX; ++n ) {
    d1 = std::fabs(sumA(n) - sumC(n))/sumC(n); //std:: error porcentual
    d2 = std::fabs(sumB(n) - sumC(n))/sumC(n);
    //std::printf("%10d %25.16e %25.16e %25.16e \n", n, sumA(n), sumB(n), sumC(n));
    std::printf("%10d %25.16e %25.16e \n", n, d1, d2); //lo que se ve en la pantalla
    
  }
  
  return 0;
}



REAL sumA(int N)
{
  REAL sum = 0.0;
  int sign = -1;
  for (int ii = 1; ii <= 2*N; ++ii) {
    sum += sign*ii/(ii+1.0);
    sign *= -1;
  }
  return sum;
}

REAL sumB(int N)
{
  REAL sum1 = 0.0, sum2 = 0.0;
  for (int ii = 1; ii <= N; ++ii) {
    sum1 += (2*ii-1)/(2.0*ii);
    sum2 += (2*ii)/(2.0*ii + 1.0);
  }
  return sum2 - sum1;
}

REAL sumC(int N)
{
  REAL sum = 0.0;
  for (int ii = 1; ii <= N; ++ii) {
    sum += 1.0/((2*ii+1)*(2.0*ii));
  }
  return sum;
}


