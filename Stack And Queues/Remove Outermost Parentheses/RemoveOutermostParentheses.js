var removeOuterParentheses = function(s) {
    let stack = [];
    let ans = "";

    for(let i=0; i 1) ? s[i] : "");
        } else {
            ans += ((stack.length > 1) ? s[i] : "");
            stack.pop();
        }
    }
    return ans;
};