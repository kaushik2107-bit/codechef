#include <iostream>
using namespace std;
int min(int x, int y) {
  if (x > y) {
    return y;
  } else {
    return x;
  }
}
int main() {
  int times;
  cin >> times;

  for (int i=0; i< times; ++i) {
    int n, x, y;
    cin >> n >> x >> y;
    int attack = 2*(n - 1);

    int a = min((x-1),(y-1));
    int b = min((x-1),(n-y));
    int c = min((n-x),(y-1));
    int d = min((n-x),(n-y));

    attack = attack + a + b + c +d;
    cout << attack << endl;
  }
  return 0;
}
