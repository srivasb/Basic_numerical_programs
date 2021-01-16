#include <iostream>
#include <vector>
#include <cmath>

const int N = 50;
const int NSTEPS = 100;
const double L = 10.35345;
const double DELTA = L/(N-1);

void initial_conditions(std::vector<double> & mat);
void boundary_conditions(std::vector<double> & mat);
void print(const std::vector<double> & mat);
void print_gnuplot(const std::vector<double> & mat);
void relax(std::vector<double> & mat);
void start_gnuplot(void);

double rho(int ix, int iy);

int main (void)
{
  std::vector<double> mat(N*N);

  initial_conditions(mat);
  boundary_conditions(mat);
  //print(mat);

  start_gnuplot();
  
  for (int ii = 0; ii < NSTEPS; ++ii) {
    relax(mat);
    print_gnuplot(mat);
  }
  //print(mat);
  
  return 0; 
}

void relax(std::vector<double> & mat)
{
  for(int ii = 0; ii< N; ++ii){
   for(int jj = 0; jj< N; ++jj){
     mat[ii*N + jj] = ( mat[(ii+1)*N + jj] + mat[(ii-1)*N + jj] + mat[ii*N + jj+1] + mat[ii*N + jj-1] )/4.0 + M_PI*rho(ii,jj)*DELTA*DELTA;
    }
  }
}

double rho(int ix, int iy)
{
  if (ix == N/2 && iy == N/2) return 20.8797887897;

  return 0;
}

void start_gnuplot(void)
{
  std::cout << "set contour" << std::endl;  
  std::cout << "set title 'Laplace Equation' " << std::endl;
  std::cout << "set terminal gif animate " << std::endl;
  std::cout << "set out 'miprimeraanimacion.gif' " << std::endl;
}


void initial_conditions(std::vector<double> & mat)
{
  for(int ii = 0; ii < N; ++ii){
    for(int jj = 0; jj < N; ++jj){
      mat[ii*N + jj] = 0.0;
    }
  }
}

void boundary_conditions(std::vector<double> & mat)
{
  int ii, jj;

  ii = 0;
  for(jj = 0; jj < N; ++jj){
      mat[ii*N + jj] = 0.0;
  }
  ii = N-1;
  for(jj = 0; jj < N; ++jj){
      mat[ii*N + jj] = 0.0;
  }
  jj = 0;
  for(ii = 1; ii < N; ++ii){
      mat[ii*N + jj] = 0.0;
  }
  jj = N-1;
  for(ii = 1; ii < N; ++ii){
      mat[ii*N + jj] = 0.0;
  }


  ii = 3*N/4;
  for(jj = N/3; jj <= 2*N/3; ++jj){
      mat[ii*N + jj] = 100.0;
  }

  ii = N/4;
  for(jj = N/3; jj <= 2*N/3; ++jj){
      mat[ii*N + jj] = -100.0;
  }

  
}

void print_gnuplot(const std::vector<double> & mat)
{
  std::cout << "splot '-' w pm3d " << std::endl;
  
  print(mat);
  
  std::cout << "e" << std::endl;
 
}

void print(const std::vector<double> & mat)
{
  double x, y;
  for(int ii = 0; ii < N; ++ii){
    x = 0.0 + ii*DELTA;
    for(int jj = 0; jj < N; ++jj){
      y = 0.0 + jj*DELTA;
      std::cout << x << "  " << y << "  " << mat[ii*N + jj] << std::endl;
    }
    std::cout << std::endl;
  }  
}
