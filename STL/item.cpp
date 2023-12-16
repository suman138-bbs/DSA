#include <iostream>

using namespace std;

class Item
{
private:
  int a;
  int b;

public:
  void setData(int val1, int val2)
  {
    a = val1;
    b = val2;
  }

  void shoWData()
  {
    cout << a <<  b;
  }

  bool operator>(Item &i)
  {
    if (a + b > i.a + i.b)
    {
      return true;
    }
    return false;
  }
};
