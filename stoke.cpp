//Programa para comprovar laley de Stokes 


#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int main ()
{
ofstream outx("x.data"); //guardar datos de salida (std::out) en archivos de texto (.data ó .txt)
ofstream outy("y.data");
ofstream outz("z.data");
ofstream out("xy.data");
ofstream out1("stoke.data");



double g = 9.8;
double forcex;
double forcey;
double forcez;


double m = 1.0;
double c = 0.21;
double PI = 3.1416;
double r = 0.1;


double t = 0.0;
double x = 0.0;
double y = 0.0;
double z = 0.0;


double vx = 20.1;
double vy = 20.1;
double vz = 20.1;

double xold;
double xnew;
double ynew;
double yold;
double zold;
double znew;


double dt = 0.05;
double Ttot = 3.4;




unsigned long nsteptot = (int)(Ttot/dt); //numero de pasos de tiempo

cout << t << " " << x << endl;
cout << t << " " << y << endl;
cout << t << " " << z << endl;
xold = x - vx * dt;
yold = y - vy * dt;
zold = z - vz * dt;

for(unsigned long step=0.0; step<nsteptot; step++) 
{


t = t + dt; //fuerza en el instante n
forcex = -c * vx;
forcey = -c  * vy;
forcez= - m * g -  c * vz ;


ynew = 2.0 * y - yold + (forcey/m) * dt * dt;
yold = y;
y = ynew;
vy = (ynew - yold)/(dt);


xnew = 2.0 * x - xold + (forcex/m) *dt * dt; //pos en el instante n+1
xold = x;
x = xnew;
vx = (xnew - xold)/(dt);

znew = 2.0 * z - zold + (forcez/m) * dt * dt;
zold = z;
z = znew;
vz = (znew - zold)/(dt);






outx << t << " "<< x << " " << vx << " " << forcex/m << endl;
outy << t << " "<< y << " " << vy << " " << forcey/m << endl;
outz << t << " "<< z << " " << vz << " " << forcez/m << endl;
out << t << " " << x << " " << y << endl;
out1 << t << " "<< x << " " << y << " " << z << " " << sqrt((vx*vx)+(vy*vy)+(vz*vz))<< " " <<endl;
}



outx.close();   //forma de cerrar el/los arhivo/s
outy.close();
outz.close();
out.close();
out1.close();



}
