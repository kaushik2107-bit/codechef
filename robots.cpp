#include <iostream>
using namespace std;
int main() {
  int times;
  cin >> times;

  for(int i=0; i<times; ++i) {
    int a, b;
    cin >> a >> b;
    char arr[a][b];
  }
  for (int i =0; i<a; ++i) {
    for (int i=0; i<b; ++i) {
      cin >> arr[i][j];
    }
  }
  for (int i =0; i<a; ++i) {
    for (int i=0; i<b; ++i) {
      cout << arr[i][j];
    }
  }

  return 0;
}
