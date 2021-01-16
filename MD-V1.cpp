#include<iostream>

// global constants
const double G = 9.81;
const double dt = 0.1;
const int N = 101;



//modelo de la estructura: define variables globales vaiables inicializadas en {0}

struct Particle{                                    
  double x{0}, y{0}, vx{0}, vy{0}, fx{0}, fy{0}; 
  double mass{0}, rad{0};
};

//Se necesita una funcion que diga como es la fuerza de la gravedad
//Una funcion que de los cambion en el tiempo de la bola

void compute_forces(Particle & bola);  
void time_step(Particle & bola, const double dt);


int main(void)
{
  Particle ball;
  
  // initial conditions
  ball.y = 9.8765434;
  ball.mass = 2.65;

  for (int ii = 0; ii < N; ++ii){
  compute_forces(ball);
  time_step(ball, dt);
  std::cout << ball.x << "    " << ball.y << "  "
            << ball.vx << "    " << ball.vy
            << std::endl;
  }

  return 0;
}

void compute_forces(Particle & bola)
{
  bola.fx = 0.0;
  bola.fy = 0.0;

  //add gravity
  bola.fy += -bola.mass*G;
}

void time_step(Particle & bola, const double dt)
{
  bola.x = bola.x + dt*bola.vx + 0.5*dt*dt*bola.fx/bola.mass;
  bola.y = bola.y + dt*bola.vy + 0.5*dt*dt*bola.fy/bola.mass;
  
  bola.vx = bola.vx + dt*bola.fx/bola.mass;
  bola.vy = bola.vy + dt*bola.fy/bola.mass;
}
  
