#include <iostream>
#include<string.h>
#include"complex.h"
using namespace std;

int main()
{
    complex c1(5,10);
    complex c2(20,30);
    complex c3;
    complex::numbeOfObjec();
  c3=  complex::Add(c1,c2);
  c3.display();

    return 0;
}
