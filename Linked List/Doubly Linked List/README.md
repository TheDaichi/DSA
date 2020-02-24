# Doubly Linked List
Similar to Singly Linked Lists, Doubly Linked Lists are also a sequential data structure with the only difference that the doubly linked lists contain two pointers instead of one to store the address of both next node and previous node respectively.

![](https://codeforwin.org/wp-content/uploads/2015/10/doubly-linked-list-node-representation.png?ezimgfmt=rs:392x152/rscb1)

As you can see in the above image:
- Each node contains two pointers, one pointing to the next node and the other pointing to the previous node.
- The prev of Head node is NULL, as there is no previous node of Head.
- The next of last node is NULL, as there is no node after the last node.

```C++
struct Node { 
    int data; 
    struct Node* next; // Pointer to next node in DLL 
    struct Node* prev; // Pointer to previous node in DLL 
};
```


Advantages of doubly linked lists over singly linked list:
- A DLL can be traversed in both forward and backward direction.
- The delete operation in DLL is more efficient if the pointer to the node to be deleted is given.
- We can quickly insert a new node before a given node.
- In a singly linked list, to delete a node, a pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using the previous pointer.

Disadvantages of doubly linked lists over singly linked list:
- Every node of DLL Require extra space for a previous pointer.
- All operations require an extra pointer previous to be maintained. For example, an insertion, we need to modify previous pointers together with next pointers.

