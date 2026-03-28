function Node(val) {
  this.val = val;
  this.next = null;
}

function MyLinkedList() {
  this.head = null;
  this.size = 0;
}

const list = new MyLinkedList();

const node1 = new Node(10);
const node2 = new Node(20);
const node3 = new Node(30);

node1.next = node2;
node2.next = node3;

list.head = node1;
list.size = 3;

let current = list.head;
while (current) {
  console.log(current.val);
  current = current.next;
}