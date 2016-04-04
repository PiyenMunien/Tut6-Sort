#include <iostream>
using namespace std;

template < typename T > //Template to be used in sorting
T swap(int a, int b)
{
	T c;
	c = a;
	a = b;
	b = c;
}