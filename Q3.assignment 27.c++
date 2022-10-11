/*3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.
*/
#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    friend complex operator+(complex, complex);

    void display()
    {
        cout << real << " + " << img << "i " << endl;
    }
};
complex operator+(complex r, complex i)
{
    complex res;
    res.real = r.real + i.real;
    res.img = r.img + i.img;
    return res;
}

int main()
{
    complex c1(2, 4), c2(3, 5);
    complex c3;
    c3 = c1 + c2;
    c3.display();

    return 0;
}