#include <iostream>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int count;
    int len;
    cin >> len;
    int arr[len];
    for (int j=0; j<len; ++j) {
      cin >> arr[j];
    }
    int n = (sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr+n);
    int m = int(log2(arr[len-1]));
    int sth[len][m+1];

    while (m >= 0) {
      sth[0][m] = 0;
      m--;
    }
    for (int d = 0; d<len ; ++d) {
      int p = int(log2(arr[d]));
      sth[d][p]++;
      int y;
      while (y>= 0) {
        sth[d+1][y] == sth[d][y];
        y--;
      }
    }

    for (int x = 0 ; x < len; ++x) {
      for (int y = 0 ; y < m ; ++y) {
        cout << sth[x][y] << endl;
      }
    }

    /*int query;
    cin >> query;

    for(int ph=0; ph<query; ph++) {
      int l, r, x;
      cin >> l >> r >> x;
      count = (r-l+1) - (sth[r][m] - sth[r-1][m]);
    }

    cout << count;

    /*int arr1[3][query];
    for (int m = 0; m<query; ++m) {
      int count = 0;
      cin >> arr1[0][m] >> arr1[1][m] >> arr1[2][m];
      for(int p= arr1[0][m]-1; p <arr1[1][m]; ++p) {
        if ((arr[p]^arr1[2][m]) > (arr[p]&arr1[2][m])) {
          /*cout << (arr[p] ^ x);
          cout << " ";
          cout << (arr[p] & x);
          cout << "\n";*//*
          count++;
        }
      }
      cout << count << endl;
    }*/




    /*for (int w=0; w<query; ++w) {
      int l, r, x;
      int count = 0;
      cin >> l >> r >> x;

      for(int p= l-1; p <r; ++p) {
        if ((arr[p]^x) > (arr[p]&x)) {
          /*cout << (arr[p] ^ x);
          cout << " ";
          cout << (arr[p] & x);
          cout << "\n";*//*
          count++;
        }
      }
      cout << count << endl;
    }*/
  }
  return 0;
}
