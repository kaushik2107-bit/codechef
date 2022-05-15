#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; i++) {
    int size;
    cin >> size;

    int arr[size];
    for (int j = 0; j<size; ++j) {
      cin >> arr[j];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    unordered_map<int, int> mp;
    for (int j=0; j<n; ++j) {
      mp[arr[j]]++;
    }
    vector<int> v;
    for (auto x:mp) {
      v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    /*for (int m = 0; m<v.size(); ++m) {
      cout << v[m] << " ";
    }*/
    if (v[v.size()-1] == v[v.size()-2]) {
      cout << "CONFUSED" << endl;
    } else {
      for (auto x:mp) {
        if (v[v.size()-1] == x.second) {
          cout << x.first << endl;
        }
      }
    }
   }
  return 0;
}
