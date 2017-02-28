/* Programa para resolver una ecuacion cuadratica, muestra la
forma de hacer array y probar el tipo de salida: printf("....);*/


#include <iostream>
#include <cmath>
#include <cstdio>

#include <iomanip>

using namespace std;


int main(){


  double N, x1, x21, x22, raiz;

  
  double n[3] = {'a','b','c'};


  cout<<"el valor de c sera dado en forma de iteracion"<<endl;
  cout<<"ingre el valor maximo de la iteracion:\n"; cin>>N;
  cout<<"ingrese el valor de a:\n"; cin>>n[0];
  cout<<"ingrese el valor de b:\n"; cin>>n[1];


  for(int i=0; i<=N; i++){

    n[2] = 1/ pow(10,i);

    raiz = sqrt(n[1]*n[1]-4*n[0]*n[2]);

    x1= (-n[1] + raiz ) / 2* n[0];

    x21 = n[2]/(n[0]*x1);

    x22 = (-n[1] - raiz ) / 2* n[0];

    //cout.setf(ios::scientific);



    //cout<<setprecision(10)<<x1<<'\t'<<setprecision(10)<<x21<<'\t'<<setprecision(10)<<x22<<endl;

    printf("%d\t%15.6e%15.6ee%\n",x1,x21, x22);

  }


  return 0;
}
