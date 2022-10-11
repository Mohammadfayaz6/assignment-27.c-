/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include <iostream>
using namespace std;
class complex
{
  int a;
  int b;

public:
  complex(int r = 0, int i = 0)
  {
    a = r;
    b = i;
  }
  complex operator+(complex const &c)
  {
    complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
  }
  complex operator-(complex const &c)
  {

    complex temp;
    temp.a = a - c.a;
    temp.b = b - c.b;
    return temp;
  }
  complex operator*(complex const &c)
  {

    complex temp;
    temp.a = a * c.a;
    temp.b = b * c.b;
    return temp;
  }
  int operator==(complex const &c)
  {

    if (a == c.a && b == c.b)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  void display()
  {
    cout << a << " + " << b << "i " << endl;
  }
};
int main()
{
  complex c1(4, 2), c2(3, 5);
  complex c3 = c1 + c2;
  complex c4 = c1 - c2;
  complex c5 = c1 * c2;
  complex c6 = c1 == c2;

  cout<<"opertor+ :"<<endl;
  c3.display();
  cout<<"operator- :"<<endl;
  c4.display();
  cout<<"operator* :"<<endl;
  c5.display();
  cout<<"operator== :"<<endl;
  c6.display();

  return 0;
}