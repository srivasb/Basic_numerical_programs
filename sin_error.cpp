/* Programa para calcular el seno de x por medio de una serie de Taylor
   y comporarlo con su valor dado por la funcion sin(double)*/


#include <iostream>
#include <cstdio>
#include <cmath>
#include<iomanip>


using namespace std;

int fact(int a){  //definicion de la funcion factorial

  int F = 1;
  for(int i=1; i<=a;i++){
    F *= i;
  }
  return F;
}


int main(){

  /* int n;             //Prueba del factorial   
  cin >> n;
  cout << fact(n); */


  int n; double x;   //n-esimo termino de la suma. Valor de x de la serie
  
  cout<<"numero de terminos de la serie:'\n"; cin>>n;
  cout<< "valor de x para encontrar el seno:'\n"; cin >> x;

   double seno = 0;

  for(int k=0; k<n; k++)
    {
      
    seno += pow(-1.0,k)*pow(x,2.0*k+1.0) / fact(2.0*k + 1.0); 

    cout<<seno<<endl; 
  }
  

  return 0;
}
