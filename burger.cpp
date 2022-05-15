#include <iostream>
using namespace std;
int main() {
  int times;
  cin >> times;
  for (int i=0; i<times; ++i) {
    int n, x, k;
    cin >> n >> x >> k;
    if (n*x <= k) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
