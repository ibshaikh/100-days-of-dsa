  var isIsomorphic = function(s, t) {
      let mapSToT = {};
      let mapTToS = {};
  
      for (let i = 0; i < s.length; i++) {
          if (!mapSToT[s[i]] && !mapTToS[t[i]]) {
              mapSToT[s[i]] = t[i];
              mapTToS[t[i]] = s[i];
          } else if (mapTToS[t[i]] !== s[i] || mapSToT[s[i]] !== t[i]) {
              return false;
          }
      }
  
      return true;
  };