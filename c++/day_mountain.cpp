#include <bits/stdc++.h>

using namespace std;

int n;
int a[100000];

bool mcheck(int l, int r) {
  for (int i = l; i < r; ++i) {
    if (a[i] > a[i + 1]) {
      for (int j = i; j < r; ++j) {
        if (a[j] <= a[j + 1]) {
          return false;
        }
      }
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    cin >> n;

    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int l, r;
    cin >> l >> r;

    if (mcheck(l, r)) {
      cout << "Yes" << endl;
    } 
	else {
      cout << "No" << endl;
    }
  }

  return 0;
}
