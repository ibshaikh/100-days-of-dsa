#include <iostream>
using namespace std;

struct Node {
  int val;
  Node* next;
  Node(int v) : val(v), next(nullptr) {}
};

class MyLinkedList {
public:
  MyLinkedList() {}
};

int main() {
  Node* node1 = new Node(10);
  Node* node2 = new Node(20);
  Node* node3 = new Node(30);

  node1->next = node2;
  node2->next = node3;

  Node* current = node1;
  while (current != nullptr) {
      cout << current->val << endl;
      current = current->next;
  }

  return 0;
}