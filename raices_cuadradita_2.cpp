/* Porgrama para resolver la ecuacion a*x*x+b*x+c=0 con a y b fijas pero oterando c para encontrar las raices no definidas*/


#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main(){

  double a;
  double b;
  double c;

  double x1, x21, x22;


  cout<<"digite el numero a:"<<endl; cin>>a;
  cout<<"digite el numero b:"<<endl; cin>>b;

  for(int i=0; i<=20; i++){

    c=1/pow(10,i);
    
  double raiz = sqrt(b*b-4.0*a*c);

  x1= (-1.0*b + raiz)/(2.0*a);
  x21 = c/(a* x1);
  x22= (-1.0*b - raiz)/(2.0*a);

  if(x21 == 0.0){
    break;  
      }

  
  cout<<i<<'\t'<<"x1:"<<scientific<<x1<<'\t'<<"x21:"<<scientific<<x21<<'\t'<<"x22:"<<scientific<<x22<<endl;

  
  }

  
  return 0;
}
