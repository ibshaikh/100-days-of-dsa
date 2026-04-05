
  #include <iostream>
  using namespace std;
  
  string largestOddNumber(string s) {
      int n = s.length() - 1;
      while (n >= 0) {
          if ((s[n] - '0') % 2 == 1) {
              return s.substr(0, n + 1);
          }
          --n;
      }
      return "";
  }
     