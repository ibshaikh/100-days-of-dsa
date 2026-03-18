var reverse = function(x) {
  let xCopy = x;
  x = Math.abs(x);
  let rev = 0;
  while (x > 0) {
    let last = x % 10;
    rev = rev * 10 + last;
    x = Math.floor(x / 10);
  }
  if (rev > 2**31 - 1) return 0;
  return xCopy < 0 ? -rev : rev;
};

console.log(reverse(123));