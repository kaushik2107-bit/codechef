#include <iostream>
using namespace std;

void min(int a, int b) {
  if (a >= b) {
    return a;
  } else {
    return b;
  }
}
int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int a;
    int arr[a];
    for (int j=0; j<a; ++j) {
      cin >> arr[j];

    }
    for (int m=0; m<a-1; ++m) {
      while (arr[m+1] != 0) {
        if (arr[m] == arr[m+1]) {
          arr[m] = 0;
        } else {
          arr[m] = min(arr[m], arr[m+1]);
        }
      }
    }

  }
  return 0;
}
