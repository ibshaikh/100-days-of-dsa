  #include <iostream>
  #include <unordered_map>
  using namespace std;
  
  bool isAnagram(string s, string t) {
      if (s.length() != t.length()) return false;
  
      unordered_map<char, int> map;
  
      for (char c : s) {
          map[c]++;
      }
  
      for (char c : t) {
          if (map.find(c) == map.end() || map[c] == 0)
              return false;
          map[c]--;
      }
  
      return true;
  }