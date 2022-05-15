#include <iostream>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i< times; ++i) {
    int x,y;
    cin >> x>> y;
    if (x >0 && y >0) {
      if (x == y) {
        cout << "YES" << endl;

      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
