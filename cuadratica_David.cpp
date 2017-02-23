#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

const double pol(double x);


int main()
{
  double a =1.0 , b =1.0 , c ;
  for(int i = 1; i < 30; i++)
    {
      c = 1/pow(10,i);
      double x1i = (-b - sqrt(b*b - 4.0*a*c))/(2.0*a);
      double x2i =  c/(a*x1i);
      double x2ii = (-b + sqrt(b*b - 4.0*a*c))/(2.0*a);
      //printf("%d\t%15.15e\t%15.15e\t%15.15e\n", i, x1i, x2i, x2ii );
      printf("%d\t%15.15e\t%15.15e\n", i, x1i, fabs(x2i-x2ii));
      //printf("%15.15e\t%15.15e\t%15.15e\n", pol(x1i), pol(x2i), pol(x2ii));
      if( x2i == 0.0)
	{
	  break;
	}
    }
  return 0;
}
	       
	       
const double pol(double x)
{
  double a, b, c ;
  double p = a*x*x + b*x + c;
  return p;
}









    
