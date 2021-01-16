//compilar: g++ -std=c++11 ______.cpp

#include <iostream>
#include <cmath>

//constante global
const double G=9.81; 
const double DT = 0.1;
const int N = 1000;
const double k=199.87;
const int Lx= 243.15;

struct particle
{
  double x{0}, y{0}, vx{0}, vy{0}, ax{0}, ay{0}, fx{0}, fy{0};
  double rad{0}, mass{0};
};

void compute_forces(particle & bola);

void time_step(particle & bola, const double dt);


int main(void){

  particle ball;

  // initial conditions
  ball.y = 9.8765434;
  ball.mass = 2.65;
  ball.rad = 0.15;
  ball.vx= 2.7;
  
  for(int ii = 0; ii < N; ++ii){
  compute_forces(ball);
  time_step(ball, DT);
  
  //print
  std::cout << ii*DT << " " << ball.x << "   " << ball.y <<" " << ball.vx << "   " << ball.vy << std::endl;
  }

  return 0;
}

void compute_forces(particle & bola)
{
  //reset forces
  bola.fx = 0.0;
  bola.fy = 0.0;

   //add gravity
  bola.fy += -bola.mass*G;

  //forces with floor
  double hy = bola.rad - bola.y;
  if (hy>0){
    bola.fy += k*hy; }

  //forces with wall
  double hx = bola.rad + bola.x - Lx;
  if (hx>0){
    bola.fx += -k*hx; }

}

void time_step(particle & bola, const double dt){

  //position
  bola.x += bola.x + dt*bola.vx + 0.5*dt*dt*bola.fx/bola.mass;  
  bola.y += bola.y + dt*bola.vy + 0.5*dt*dt*bola.fy/bola.mass;
  //velocity
  bola.vx += bola.vx + dt*bola.fx/bola.mass;
  bola.vy += bola.vy + dt*bola.fy/bola.mass;  

}




  


