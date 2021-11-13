#include <iostream>
#include <tuple>
#include "demo.h"

using namespace std;

// Test desde Mac
// g++ -pthread -std=c++17 -o main main.cpp
// COmentario extra de Mac
// Texto sugerido

// https://www.educative.io/edpresso/how-to-return-multiple-values-from-a-function-in-cpp17
auto foo()
{
  struct retVals {        // Declare a local structure 
    int i1, i2;
    string str;
  };
  return make_tuple(10, 20, "Hi", 5.4, 8.2); // Return the 
}

int main()
{
  demoLinkedListSorted();
  demoDoubleLinkedListSorted();

  auto [v1, v2, v3, v4, v5] = foo(); // structured binding declaration
  cout << v1 << ", " << v2 << ", " << v3 << ", " << v4 << ", " << v5 << endl;
  
  cout << "Finalizando el programa ..." << endl;
}