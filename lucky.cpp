#include <iostream>
using namespace std;

int main() {
  int times;
  cin >> times;
  for (int i=0; i<times; ++i) {

    int a;
    cin >> a;

    int num1 = a%10;
    a/=10;
    int num2 = a%10;
    a/=10;
    int num3 = a%10;
    a/=10;
    int num4 = a%10;
    a/=10;
    int num5 = a%10;
    a/=10;
    int num6 = a%10;
    a/=10;

    if (num6+num5+num4 == num1+num2+num3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
