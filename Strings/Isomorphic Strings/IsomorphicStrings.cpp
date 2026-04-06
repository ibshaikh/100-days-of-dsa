 #include <iostream>
  #include <unordered_map>
  using namespace std;
  
  bool isIsomorphic(string s, string t) {
      unordered_map<char, char> mapST, mapTS;
  
      for (int i = 0; i < s.length(); i++) {
          char cs = s[i], ct = t[i];
  
          if (mapST.count(cs) == 0 && mapTS.count(ct) == 0) {
              mapST[cs] = ct;
              mapTS[ct] = cs;
          } else {
              if (mapST[cs] != ct || mapTS[ct] != cs)
                  return false;
          }
      }
  
      return true;
  }
      