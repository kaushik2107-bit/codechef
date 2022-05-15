#include <iostream>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i = 0; i<times; ++i) {
    int a, b;
    cin >> a >> b;
    if (b <= 1.07*a) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
