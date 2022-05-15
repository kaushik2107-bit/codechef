#include <iostream>
using namespace std;
int main() {
  int times;
  cin >> times;
  for (int i=0; i<times; ++i) {
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for (int j=0; j<a; ++j) {
      string s;
      char p[b];

      for (int m=0; m<b; ++m) {
        p[m] = s[m];
        cout << p[i] << ' ';
      }
    }
  }
  return 0;
}
