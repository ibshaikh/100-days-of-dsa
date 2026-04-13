 #include <iostream>
  using namespace std;
  
  int mySqrt(int x) {
      if (x < 2) return x;
      int l = 2, r = x / 2;
      while (l <= r) {
          int m = l + (r - l) / 2;
          long long sq = 1LL * m * m;
          if (sq == x) return m;
          if (sq > x) r = m - 1;
          else l = m + 1;
      }
      return r;
  }