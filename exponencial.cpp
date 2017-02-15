/* Programa para la expansion en serie de la funcion exponencial */


#include <iostream>
#include <cstdio>
#include <cmath>




double factorial(n);

int main(){

  int suma = 0;
  int potencia = 0;
  int n=0;
  int x;

  std::cout<<"Digitar grado n del polinomio:";
  std::cin>>n;

  for(int i=1; i<=n; i++){


    x = i;

    
    potencia = (pow(-1,n)*pow(x,n)) / factorial(n);
     suma += potencia;
      
  }

  std::cout<<x<<"\t"<<suma;
  
  
  return 0;

}
