#include <iostream>
#include <algorithm>
using namespace std;
int min(int a, int b) {
  if (a>= b) {
    return b;
  } else {
    return a;
  }
}
int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; i++) {
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int j=0; j<n; ++j) {
      cin >> arr[j];
    }
    sort(arr, arr+n);
    int method1 = 0;
    int method2 = arr[n-1];
    for (int m=0; m< n; ++m) {
      method1 = method1 + (arr[m]-1)/x + 1;
    }
    cout << min(method1, method2) << endl;
  }
  return 0;
}
