#include <bits/stdc++.h>

using std::abs;

namespace proj2 {

  int gcd(int a, int b) {
    int t = 0;
    while (b != 0) {
      if (t < 0 && abs(b + t) < abs(b) ) b += t;
      if (t > 0 && abs(b - t) < abs(b) ) b -= t;
      t = b;
      b = a % b;
      a = t;
    }
    return a;
  }
  
  long gcd(long a, long b) {
    long t;
    while (b != 0) {
      t = b;
      b = a % b;
      a = t;
    }
    return a;
  }
}