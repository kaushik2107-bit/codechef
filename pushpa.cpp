#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i = 0; i<times; ++i) {
    int towers;
    cin >> towers;

    int arr[towers];
    for (int j =0; j < towers; ++j) {
      cin >> arr[j];
    }
    int n = (sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr + n);
    /*for (int x = 0; x<towers; ++x) {
      cout << arr[x] << ' ';
    }
    cout <<'\n';
    */
    unordered_map<int, int> mp;
    int count = 0;
    unordered_set<int> val;
    for (int i = 0; i < n; i++) {
      mp[arr[i]]++;
    }
    for (auto x : mp) {
      //cout << x.second << endl;
      if (x.second > 1) {
        val.insert( x.second + x.first -1);
      }
    }
    val.insert(arr[towers-1]);

    vector<int> v(val.begin(), val.end());

    /*for (auto i: v) {
      cout << i << ' ';
    }*/

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;


  }

  return 0;
}
