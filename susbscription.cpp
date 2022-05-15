#include <iostream>
using namespace std;

int main() {
  int times;
  cin>>times;

  for(int i=0; i<times; ++i) {
    int a;
    cin >> a;
    if(a<=30) {
      cout << "NO" << endl;

    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
