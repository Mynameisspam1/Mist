#include <iostream>

#include <signal.h>

using namespace std;

int main() 
{
  cout << "new q lol" << endl;
  while(true)
  {
    // Memory leak
    int * q = new int;
    // no delete
  }
}
