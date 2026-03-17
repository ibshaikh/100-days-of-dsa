/**
 * @param {number} x
 * @return {boolean}
 */
function isPalindrome(x) {
    // Negative numbers OR numbers ending with 0 (but not 0 itself)
    if (x < 0 || (x % 10 === 0 && x !== 0)) {
        return false;
    }

    let reversedHalf = 0;

    // Reverse only half of the number
    while (x > reversedHalf) {
        let digit = x % 10;              // get last digit
        reversedHalf = reversedHalf * 10 + digit;
        x = Math.floor(x / 10);          // remove last digit
    }

    // Check for even & odd length numbers
    return x === reversedHalf || x === Math.floor(reversedHalf / 10);
}