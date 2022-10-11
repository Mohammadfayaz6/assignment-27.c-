/*7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include <iostream>
using namespace std;
class fraction
{
    long numerator;
    long denominator;

public:
    fraction(long num = 0, long den = 0)
    {
        numerator = num;
        denominator = den;
    }
    friend void operator>>(istream &input, fraction &f)
    {
        cout << "\nnumerator   : ";
        input >> f.numerator;
        cout << "\ndenominator : ";
        input >> f.denominator;
    }
    friend void operator<<(ostream &output, fraction &f)
    {
        output << f.numerator << "/" << f.denominator;
    }
    fraction operator++()
    {
        ++numerator;
        ++denominator;
        return (*this);
    }
    fraction operator++(int f)
    {
        fraction temp = *this;
        numerator++;
        denominator++;

        return temp;
    }
};
int main()
{
    fraction f1, f2;
    cout << "\n f1   : ";
    cout << f1;
    cout << "\n f2   : ";
    cout << f2;
    cout << "\n\n Enter first fraction " << endl;
    cin >> f1;
    cout << "\n f1++  : ";
    f1++;
    cout << f1;
    cout << "\n ++f1  : ";
    ++f1;
    cout << f1;
    cout << "\n Enter second fraction " << endl;
    cin >> f2;
    f2 = ++f1;
    cout << "\n f2 = ++f1 :" << endl;
    cout << "\n f1  : ";
    cout << f1;
    cout << "\n f2  : ";
    cout << f2;
    f2 = f1++;
    cout<<"\n";
    cout << "\n f2 = f1++ :" << endl;
    cout << "\n f1  : ";
    cout << f1;
    cout << "\n f2  : ";
    cout << f2;

    return 0;
}