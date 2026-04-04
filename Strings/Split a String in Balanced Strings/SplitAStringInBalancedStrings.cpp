
  #include <iostream>
  #include <string>
  #include <unordered_map>
  using namespace std;
  
  int maxFreqSum(string s) {
      unordered_map<char,int> freq;
      for (char c : s) freq[c]++;
  
      string vowels = "aeiou";
      int maxV = 0, maxC = 0;
  
      for (auto &p : freq) {
          char ch = p.first;
          int cnt = p.second;
          if (vowels.find(ch) != string::npos) {
              maxV = max(maxV, cnt);
          } else {
              maxC = max(maxC, cnt);
          }
      }
  
      return maxV + maxC;
  }
      