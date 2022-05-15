#include <iostream>
using namespace std;

int  main() {
  int times;
  cin >> times;
  for (int i=0; i<times; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    if( a>(b+c) || b>(a+c) ||c>(a+b) ) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
