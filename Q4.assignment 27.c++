/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
Output
*/
#include <iostream>
using namespace std;
class Time
{
private:
  int Hours, min, sec;

public:
  Time()
  {
    Hours = min = sec = 0;
  }
  friend int operator>>(istream &scan, Time &t)
  {
    cout << "Enter hours " << endl;
    scan >> t.Hours;
    cout << "Enter minutes " << endl;
    scan >> t.min;
    cout << "Enter seconds " << endl;
    scan >> t.sec;
    t.min = t.min + t.sec / 60;
    t.sec %= 60;
    t.Hours = t.Hours + t.min / 60;
    t.min %= 60;
    if (t.Hours >= 25)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  friend int operator<<(istream &scan, Time &t)
  {
    cout << "/nEnter hours " << endl;
    scan >> t.Hours;
    cout << "Enter minutes " << endl;
    scan >> t.min;
    cout << "Enter seconds " << endl;
    scan >> t.sec;
    t.min = t.min + t.sec / 60;
    t.sec %= 60;
    t.Hours = t.Hours + t.min / 60;
    t.min %= 60;
    if (t.Hours >= 25)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  friend void operator<<(ostream &print, Time &t)
  {
    print << "Hours   : " << t.Hours << endl;
    print << "Minutes : " << t.min << endl;
    print << "Second  : " << t.sec << endl;
  }
  int operator==(Time t)
  {
    int res1 = Hours * 3600 + min * 60 + sec;
    int res2 = t.Hours * 3600 + min * 60 + sec;
    if (res1 == res2)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
};
int main()
{
  Time t, t1;
  cout << "Enter First Time " << endl;
  cout << "---------------------------------" << endl;
  if (cin >> t)
  {
    cout << "Invalid Time " << endl;
    return 0;
  }
  cout << "First Time " << endl;
  cout << t;
  cout << "Enter Second Time " << endl;
  cout << "---------------------------------" << endl;
  if (cin >> t1)
  {
    cout << "Invalid Time " << endl;
    return 0;
  }
  cout << t1;
  if (t == t1)
  {
    cout << "Time is same " << endl;
  }
  else
  {
    cout << "Time is different" << endl;
  }

  return 0;
}