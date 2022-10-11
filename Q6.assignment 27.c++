/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include <iostream>
#include <string.h>
using namespace std;
class cstring
{
  char str[20];

public:
  void input_string()
  {
    cout << "Enter a string " << endl;
    cin >> str;
  }
  void display()
  {
    cout << str;
  }
  cstring operator+(cstring c)
  {
    cstring s;
    strcpy(s.str, str);
    strcat(s.str, c.str);
    return s;
  }

  int operator==(cstring &t);
};
 int cstring::operator==(cstring &t)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    for (int j = 0; t.str[i] != '\0'; j++)
    {
      if (str[i] == t.str[j])
      {
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return 0;
};

int main()
{
  cstring s1, s2, s3;
  int res = 0;
  s1.input_string();
  s2.input_string();

  cout << "\nFirst string " << endl;
  s1.display();
  cout << "\n--------------------" << endl;

  cout << "\nSecond string " << endl;
  s2.display();
  cout << "\n---------------------" << endl;

  s3 = s1 + s2;
  cout << "\nresult is :" << endl;
  s3.display();
  cout << "\n-------------------" << endl;
  res = s1 == s2;
  if (res == 0)
  {
    cout << "\nboth strings are equal" << endl;
  }
  else
  {
    cout << "\nboth strings are not equal";
  }
  return 0;
}