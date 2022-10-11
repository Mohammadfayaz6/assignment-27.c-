/*2. Write a C++ program to overload unary operators that is increment and decrement.
*/
#include<iostream>
using namespace std;
class unary
{
    int num;
    public:
    unary(int a)
    {
        num=a;
    }
     unary operator++()
    {
        return num++;
    }
     unary operator--()
    {
         return num--;
    }
    void display()
    {
        cout<<"num = "<<num<<endl;
    }
    


};
int main()
{
    unary i1(1),i2(2);
    ++i1;
    --i2;
    cout<<"increment operator :"<<endl;
    i1.display();
    cout<<"decrement operator :"<<endl;
    i2.display();

    return 0;
}