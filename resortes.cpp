#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;


int main ()
{
  
ofstream out("x1.data");   //guarda los resultados en un archivo .dat
ofstream out1("x2.data");


double k = 0.5;  //nombre e inicializa constante
double kc = 0.8;



double force1;
double force2;

double m = 1.0;
double t = 0.0;


double  x1 = 4.0;
double  x2 =  8.0; 



double x1old;
double x1new;
double x2old;
double x2new;


double v1 = 0.1;
double v2 = 0.1;


double dt = 0.01;
double Ttot = 10000.0;

unsigned long nsteptot = (int)(Ttot/dt); //nuero de pasos de  tiempo

cout << t << " " << x1 << endl;
cout << t << " " << x2 << endl;
x1old = x1 - v1 * dt;
x2old = x2 - v2 * dt;


for (unsigned long step=0.0; step<nsteptot; step++) {
  
t = t + dt;     //fuerza en el instante n
force1 = -k * x1 + kc * (x2-x1);
force2 = -k * x2 - kc * (x2-x1);
	    
x1new = 2.0*x1 - x1old + (force1/m) * dt * dt;  //pos en el instante n+1
x1old = x1;
x1 = x1new;
v1 = (x1new - x1old)/(dt);




x2new = 2.0*x2 - x2old + (force2/m) * dt * dt;  //pos en el instante n+1
x2old = x2;
x2 = x2new;
v2 = (x2new - x2old)/(dt);




out << t<< " " << x1<< " " << v1<< " " <<(x2-x1)/2 <<" " << endl;
out1 << t<< " " << x2<< " " << v2<< " " << (x2+x1)/2 << " "<< endl;



}
out.close();
out1.close();
}


	    

	    

