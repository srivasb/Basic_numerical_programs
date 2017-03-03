/* Programa para desarrollar la serie 1/n en iteracion creciente 
   e iteracion decreceinte*/


#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;


const int N1=1000; 
const int N2=1;


int main(){


  

  double sum1=0, sum2=0, d;

  //d = std::fabs(sum1 - sum2) / sum1;

   for(int i=1; i<= N1; i++ ){

    sum1 = 1.0 / i;

    

 for(int j=1000; N2 <= j; j-- ){

   sum2 = 1.0/j;

   cout<<i<<'\t'<<sum2<<'\t'<<j<<'\t'<<sum2<<endl;

  
   //cout<<d<<endl;

   
 }
 
 }



  

  return 0;
}
