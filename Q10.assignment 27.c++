/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/
#include <iostream>
using namespace std;
class matrix
{
  int a[3][3];

public:
  void accept_values()
  {
    cout << "Enter 1st matrix \n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
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
  void operator+(matrix m)
  {

    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        sum[i][j] = a[i][j] + m.a[i][j];
      }
    }

    cout << "\naddition of two matrix is :" << endl;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << " ";
        cout << sum[i][j] << "\t";
      }
      cout << "\n";
    }
  }
};

int main()
{
  matrix m1, m2;
  m1.accept_values();
  m2.accept_values();
  cout << "First matrix :" << endl;
  m1.display();
  cout << "Second matrix " << endl;
  m2.display();
  m1 + m2;

  return 0;
}