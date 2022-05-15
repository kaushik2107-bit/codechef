#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i< times; ++i) {
    int size;
    cin >> size;
    int arr[size];
    for (int j=0; j<size; ++j) {
      int a;
      cin >> a;
      a = int(log2(a));
      arr[j] = a;
    }
    int query;
    cin >> query;
    for (int m=0; m<query; ++m) {
      int l, r, x;
      cin >> l >> r >> x;
      int count =r-l+1;
      x = int(log2(x));
      for (int p=l-1; p<r; ++p) {
        if (arr[p] == x) {
          count = count - 1;
        }
      }
      cout << count << endl;
    }
  }

  return 0;
}
