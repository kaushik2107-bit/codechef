#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int times;
  cin >> times;
  for(int i=0; i<times; ++i) {
    int a, b, m;
    cin >> a >> b >> m;

    int c = abs(b-a);
    cout << min(c, m-c) << endl;
  }
  return 0;
}
