#include <iostream>
#include <iomanip>


using namespace std;

int main(){

   double numero = 78524.32423;

   
 //std::cout<<setw(20)<<numero<<endl; //NUMERO DE LUGARES PARA IMPRIMIR EL NUMERO
 //std::cout<<setprecision(8)<<numero<<endl; //IMPREME EL NUMERO DE SIFRAS SIGNIFICATIVAS()
 // std::cout<< setw(15) << setw(6) << setfill('r') <<numero<<endl; //RELLENA LOS ESPACION VACION CON ('')
   //std::cout<<scientific<<numero<<endl; //NOTACION CIENTIFICA
   //std::cout<< showpos<<numero<<endl; //MUESTRA EL SIGNO + EN LOS NUMEROS POSITIVOS	
   //std::cout<<boolalpha<< (17< 5) <<endl;  // impreme falso si el resultado de una operacion no es verdad
   //std::cout<< fixed <<setprecision(15)<< numero<<endl; //RELLENA  LAS CASILLAS DEL NUMERO DE SALIDA SEGUN SU PRECISION
   //std::cout<< setw(9)<< setiosflags(ios::right)<<numero<<endl; //DA LA HUBICACION AL NUMERO DE SALIDA, ENTRE EL NUMERO DE CASILLAS. ALINEA LOS DATOS EN LAS TABLAS.

   cout.precision(5);
   cout<<numero<<endl;  /*JUNTO CON EL cout.precision() IMPRIME LA PRECISION DEL NUMERO DE SALIDA */




   

   return 0;
}
