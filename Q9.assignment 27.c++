/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include <iostream>
using namespace std;
#include <string.h>
class mystring
{
    char str[100];

public:
    void input_string()
    {
        cout << "Enter string " << endl;
        cin >> str;
    }
    void operator!()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] - 32;
            }
            else
            {
                if (str[i] >= 65 && str[i] <= 90)
                {
                    str[i] = str[i] + 32;
                }
            }
        }
    }
    void display()
    {
        cout << "revere case string is " << str;
    }
};
int main()
{
    mystring str1;
    str1.input_string();
    str1.display();
    !str1;
    str1.display();

    return 0;
}