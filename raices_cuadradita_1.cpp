/* Porgrama para resolver la ecuacion a*x*x+b*x+c=1 encontrando sus raices*/


#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main(){

  double a;
  double b;
  double c;

  double x1, x2;
  

  cout<<"digite el numero a:"<< endl; cin>>a;
  cout<<"digite el numero b:"<<endl; cin>>b;
  cout<<"digite el numero c:"<<endl; cin>>c;

  double raiz = sqrt(b*b-4*a*c);

  x1= (-1*b + raiz)/(2*a);
  x2 =(-1*b - raiz)/(2*a);


  
  
  cout<<"la raiz positiva es:"<<scientific<<x1<<endl;
  cout<<"la raiz negativa es:"<<scientific<<x2<<endl;


  return 0;
}
