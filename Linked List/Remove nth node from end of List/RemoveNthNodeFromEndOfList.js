var removeNthFromEnd = function(head, n) {
    let sentinel = new ListNode(0, head);
    let length = 0;
    let first = head;
    while (first) {
        length++;
        first = first.next;
    }
    let prev = sentinel;
    for (let i = 0; i < length - n; i++) {
        prev = prev.next;
    }
    prev.next = prev.next.next;
    return sentinel.next;
};
    