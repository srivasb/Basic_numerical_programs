#include <iostream>

// global constants
const double G = 9.81;
const double K = 2299.87;  //constante elastica debida al rebote
const double LX = 10.00;
const double LY = 10.00;
const double LX2 = 0.0;
const double dt = 0.0001;
const int N = 100001;

struct particle {
  double x{0}, y{0}, vx{0}, vy{0}, fx{0}, fy{0};
  double mass{0}, rad{0};
};

void compute_forces(particle & bola);
void time_step(particle & bola, const double dt);

int main(void)
{
  particle ball;

  //initial conditions
  ball.y = 5.0;
  ball.x = 5.0;
  ball.vx = 2.7;
  ball.vy = -1.7;
  ball.mass = 2.65;
  ball.rad = 0.15;

  for(int ii = 0; ii < N  ; ++ii){
    compute_forces(ball);
    time_step(ball ,dt);
    //print
    std::cout <<ii*dt<<" "<< ball.x << " " << ball.y << " "
          << ball.vx << " " << ball.vy
          << std::endl;
  }
 
 

  return 0;
}

void compute_forces(particle & bola)
{
  bola.fx = 0.0;
  bola.fy = 0.0;

  //add gravity
  bola.fy += -(bola.mass*G);
 
  double hy;
  // force with floor...abajo
  hy= bola.rad - bola.y;
  if(hy>0){
    bola.fy += K*hy;
  }
  // arriba
  double hya;
  hya = bola.rad + bola.y - LY;
  if(hya>0){
    bola.fy += -K*hya;
  }
 
  
  //pared derecha
  double hxd;
  hxd = bola.rad + bola.x - LX;
  if(hxd>0){
    bola.fx += -K*hxd;
  }
  //pared izquierda
  double hxi;
  hxi = LX2 + bola.rad - bola.x;
  if(hxi>0){
    bola.fx += K*hxi;
  }          
          
}


void time_step(particle & bola, const double dt)
{
  bola.x = bola.x + dt*bola.vx + 0.5*dt*dt*bola.fx/bola.mass;
  bola.y = bola.y + dt*bola.vy + 0.5*dt*dt*bola.fy/bola.mass;

  bola.vx = bola.vx + dt*bola.fx/bola.mass;
  bola.vy = bola.vy + dt*bola.fy/bola.mass;
}
