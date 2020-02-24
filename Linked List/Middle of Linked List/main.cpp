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

// Finding middle of element
node *middleOfElement(node *head) {

  /**
    while (pointer != NULL) {
        if ((i & 1) == 1) {
            halfPointer = halfPointer -> next;
        }
        i++;
        pointer = pointer -> next;
    }
  */

  if (head == NULL)
    return NULL;
  
  node *fastPtr = head;
  node *slowPtr = head;

  if ((fastPtr -> next) -> next == NULL) {
    slowPtr = slowPtr -> next;
    return slowPtr;
  } else {
    while ((fastPtr -> next) -> next != NULL) {
      slowPtr = slowPtr -> next;
      fastPtr = (fastPtr -> next) -> next;
      if (fastPtr -> next == NULL)
        break;
    } 
  }
  return slowPtr;

}

int main() {
  node *head = NULL;
  head = creationOfLinkedList(head, 10);
  head = creationOfLinkedList(head, 20);
  head = creationOfLinkedList(head, 30);
  head = creationOfLinkedList(head, 40);
  head = creationOfLinkedList(head, 50);
  head = creationOfLinkedList(head, 60);
  head = creationOfLinkedList(head, 70);
  head = creationOfLinkedList(head, 80);
  
  node *middle = middleOfElement(head);
  cout << middle -> key;

  cout << endl;

  return 0;
}
