#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

long double epsilon = 1;
long double suma = 1;


int main(int argc, char *argv[])
{

  while(epsilon+1>1){
    epsilon = epsilon / 2;
      }
  
  cout.setf(ios::scientific);

  cout <<std::setprecision(20)<< epsilon<<'\n';

  return 0;
  
  
}
