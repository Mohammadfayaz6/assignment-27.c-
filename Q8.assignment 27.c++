/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -
*/
#include <iostream>
using namespace std;
class Matrix
{
    int a[3][3];

public:
    void input_matrix()
    {
        cout << "Enter elements in matrix" << endl;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                
                cout << a[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j]=-a[i][j];
            }
            cout << "  \n";
        }
    }
};
int main()
{
    Matrix m1;
    m1.input_matrix();
    cout<<"matrix is :\n";
    m1.display();
    cout<<"\nnegate matrix is :";
    -m1;
    m1.display();
    return 0;
}