#include<iostream>
#include "math_tools.h"
#include "display_tools.h"
#include <stdlib.h>
using namespace std;

int main(void ) {
  /*Vector zeroes_vector;
  Matrix zeroes_matrix;

  zeroes(zeroes_vector,5);
  zeroes(zeroes_matrix,5);

  showVector(zeroes_vector);
  showMatrix(zeroes_matrix);*/

  Matrix M, inv;
  zeroes(M,3);
  M.at(0).at(0) = 1;M.at(0).at(1) = 2;M.at(0).at(2) = 3;
  M.at(1).at(0) = 4;M.at(1).at(1) = 5;M.at(1).at(2) = 6;
  M.at(2).at(0) = 7;M.at(2).at(1) = 8;M.at(2).at(2) = 9;
  cout<<"MATRIZ:"<<endl;
  showMatrix(M);
  float det = determinante(M);
  cout<<endl<<"determinante: "<<det<<endl;
  if(det == 0) return EXIT_FAILURE;
  invMatrix(M,inv);
  cout<<endl<<"MATRIZ INVERSA:"<<endl;
  showMatrix(inv);
  return 0;
}
