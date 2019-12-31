#include<iostream>
using namespace std;

int main(){
  char c;
  short s;
  int i;
  long l;
  long long ll;
  float f;
  double d;
  long double ld;
  int array[20];
  int *ptr = array;

  cout << "Tamaño en bytes de un tipo char: " << sizeof(c) << "\n";
  cout << "Tamaño en bytes de un tipo short: " << sizeof(s) << "\n";
  cout << "Tamaño en bytes de un tipo int: " << sizeof(i) << "\n";
  cout << "Tamaño en bytes de un tipo long: " << sizeof(l) << "\n";
  cout << "Tamaño en bytes de un tipo long long: " << sizeof(ll) << "\n";
  cout << "Tamaño en bytes de un tipo float: " << sizeof(f) << "\n";
  cout << "Tamaño en bytes de un tipo double: " << sizeof(d) << "\n";
  cout << "Tamaño en bytes de un tipo long souble: " << sizeof(ld) << "\n";
  cout << "Tamaño en bytes de un tipo array de enteros con 20 elementos: " << sizeof(array) << "\n";
  cout << "Tamaño en bytes de un tipo pointer: " << sizeof(ptr) << "\n";

  return 0;
}
