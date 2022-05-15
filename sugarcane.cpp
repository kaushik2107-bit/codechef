#include <iostream>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i = 0; i< times; ++i) {
    int a;
    cin >> a;
    int profit = 0.3*50*a;
    cout << profit << endl;
  }
}
