#include <iostream>
#include <unordered_map>
#include <map>
#include <cmath>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int size;
    cin >> size;

    int arr1[size];
    int arr2[size];

    for (int j=0; j<size; ++j) {
      cin >> arr1[j];
    }
    for (int j=0; j<size; ++j) {
      cin >> arr2[j];
    }

    map<pair<int, int>, int> mp;

    int ans =0;
    for (int m=0; m<size; ++m) {
      /*if (mp[{arr2[m], arr1[m]}] == 0) {
        mp[{arr1[m], arr2[m]}]++;
      } else {
        mp[{arr2[m], arr1[m]}]++;
      }*/
      ans += mp[{arr1[m], arr2[m]}];
      mp[{arr2[m], arr1[m]}]++;
    }
  /*  for (auto x:mp) {
      ans+= (x.second)*(x.second -1)/2;
    }*/
    cout << ans << endl;
  }
  return 0;
}
