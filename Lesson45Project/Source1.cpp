#include <iostream>
#include <string>
using namespace std;

void rand_init(int* array, int size, int bound) {

  for(int i=0,i<size, i++){
  array[i]=rand()%bound;
  }
}
