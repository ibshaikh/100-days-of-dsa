function secondHighest(s) {
  let largest = -1;
  let secondLargest = -1;

  for (let i = 0; i < s.length; i++) {
    let char = s[i];

    if (char >= "0" && char <= "9") {
      let num = Number(char);
      if (num > largest) {
        secondLargest = largest;
        largest = num;
      } else if (num > secondLargest && num < largest) {
        secondLargest = num;
      }
    }
  }
}
