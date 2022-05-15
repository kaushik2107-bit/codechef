#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;
  int ans = 0;
  int queries;
  cin >> queries;
  int arr[size];
  for (int i=0; i<size; ++i) {
    cin >> arr[i];
  }
  int a, b, c;
  for (int i=0; i<queries; ++i) {
    cin >> a;
    if (a==1) {
      cin >> b >> c;
      for (int j=0; j<size; ++j) {
        if (arr[j] == b) {
          arr[j] = c;
        }
      }
    }
    else {
      cin >> b;
      for (int j =0; j<size; ++j) {
        arr[j] = c;
      }
    }
    for (int j=0; j<size; ++j) {
      ans += arr[j];
    }
    cout << ans << endl;
  }

  return 0;
}
