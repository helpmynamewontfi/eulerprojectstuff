#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

int main() {
  float c = 1;
  bool found = false;
for(int a = 1; a < 1000; a++)
  {
    for(int b = 1; b <1000; b++)
    {
      c = sqrt((a*a)+(b*b));
      if(a+b+c==1000)
      {
        cout << a << "\n" << b << "\n" << c;
        found = true;
      }
      if(found == true)
      {break;}
    }
    if(found == true)
    {break;}
  }


}
