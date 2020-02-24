#include <bits/stdc++.h>
using namespace std;

typedef struct node {
  int key;
  node *next;
  node (int x) {
    key = x;
    next = NULL;
  }
} node;

// Creation of Linked List
node *creationOfLinkedList(node *head, int key) {
  node *temp = new node(key);
  if (head == NULL) {
    head = temp;
    return head;
  } else {
    node *current = head;
    // GEtting hold of last node
    while (current -> next != NULL) {
      current = current -> next;
    }
    current -> next = temp;
    return head;
  }
}

node *findNthNode(node *head, int n) {
  node *fastPtr = head;
  node *slowPtr = head;
  while (n > 0) {
    fastPtr = fastPtr -> next;
    n--;
  }
  while (fastPtr != NULL) {
    fastPtr = fastPtr -> next;
    slowPtr = slowPtr -> next;
  }
  return slowPtr;
}

int main() {
  node *head = NULL;
  head = creationOfLinkedList(head, 10);
  head = creationOfLinkedList(head, 20);
  head = creationOfLinkedList(head, 30);
  head = creationOfLinkedList(head, 40);
  cout << findNthNode(head, 3) -> key << endl;
  return 0;
}
