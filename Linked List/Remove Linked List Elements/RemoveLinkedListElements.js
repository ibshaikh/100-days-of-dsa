
var removeElements = function(head, val) {
    let sentinel = new ListNode(0, head);
    let current = sentinel;
    while (current && current.next) {
        if (current.next.val === val) {
            current.next = current.next.next;
        } else {
            current = current.next;
        }
    }
    return sentinel.next;
};
    
