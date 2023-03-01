#include <iostream>
#include "vivod.h"

using namespace std;

void dataCout(int a, int b, int c, int d, int ch, int zn)
{
	cout << a << "/" << b << " + " << c << "/" << d << " = " << ch << "/" << zn <<endl;
	cout << a << "/" << b << " + " << c << "/" << d << " = " << float(ch)/float(zn) << endl;

}