# Eigen-3.3.3
Porgramas de matrices

Usar la libreria Eigen 3.3.3 para resolver porblemas basicos del algebra lienal en lenguage C++.


Para compilar: 

g++ -O2 -L $HOME/local/lib -I $HOME/local/include/eigen3  "       ".cpp -o "         "

Para errores:

g++ -O2 -Wall -fsanitize=address -L $HOME/local/lib -I $HOME/local/include/eigen3  "       ".cpp

usando (gdb):

g++ -g -ggdb -O2 -L $HOME/local/lib -I $HOME/local/include/eigen3  "       ".cpp -o "       ".x
./"     ".x
gdb ./"      ".x

(gdb) run
(gdb) l
(gdb) where
