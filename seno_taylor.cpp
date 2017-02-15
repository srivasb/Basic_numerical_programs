/* Porgrama que aproxima la funcion seno por serie de taylor */


#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main(){

  int i, j, n=30; //el iterador i. el iterador j.  La precision de la serie n.
  double seno, dividendo, divisor, signo;
  double x ;
  double dx = 0.2;

  seno = 0;  //inicializa el seno 

  for(i=0; i<= n; i++){   //Se definen varios for para hacer la serie por partes

    
    x= i * dx;

    
       dividendo = 1;
    for(j=0; j < 2*i+1; j++){   //Para el dividendo 
      dividendo *= x;
    }

    divisor =1;  //Para hacer el factorial
    for(j = 1; j <= 2*i+1; j++ ){
      divisor *= j;
    }

    if(i%2 == 0) {    //Sentencia IF/ELSE para el signo del termino n de la serie
      signo = 1;
    } else {
      signo = -1;
    }

    seno += (dividendo / divisor) * signo; //Valor de la suma del seno
    
    }

  std::cout<<seno<<'\t'<<x<<endl;


  return 0;

  
  }


