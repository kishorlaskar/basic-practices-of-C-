#include <iostream>

#include "Myfirstclass.h"
using namespace std;

int main()
{
   Myfirstclass obj;
   Myfirstclass *p = &obj;
   p->display();
   return 0;
}
