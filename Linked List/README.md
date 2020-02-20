# Linked List
> Linked Lists are linear or sequential data structures in which elements are stored at non-contiguous memory location and are linked to each other using pointers.

Like arrays, linked lists are also linear data structures but in linked lists elements are not stored at contiguous memory locations. They can be stored anywhere in the memory but for sequential access, the nodes are linked to each other using pointers.

Each element in a linked list contains of two parts:
- Data: This part stores the data value of the node. That is the information to be stored at the current node.
- Next Pointer: This is the pointer variable or any other variable which stores the address of the next node in the memory.


![](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcQuRHwe1jKenn55_ws05-I9IkvFNOpf6CyVSG4NOqpRW68HsOgI)

Advantages of Linked Lists over Arrays: Arrays can be used to store linear data of similar types, but arrays have the following limitations:
- The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. On the other hand, linked lists are dynamic and the size of the linked list can be incremented or decremented during runtime.
- Inserting a new element in an array of elements is expensive, because a room has to be created for the new elements and to create room, existing elements have to shift.
For example, in a system, if we maintain a sorted list of IDs in an array id[].

  ```
  id[] = [1000, 1010, 1050, 2000, 2040]
  ```
And if we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements after 1000 (excluding 1000). Deletion is also expensive with arrays until unless some special techniques are used. For example, to delete 1010 in id[], everything after 1010 has to be moved.

On the other hand, nodes in linked lists can be inserted or deleted without any shift operation and is efficient than that of arrays.

Disadvantages of Linked Lists:
- Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So we cannot do a binary search with linked lists efficiently with its default implementation. Therefore, lookup or search operation is costly in linked lists in comparison to arrays.
- Extra memory space for a pointer is required with each element of the list.
- Not cache friendly. Since array elements are present at contiguous locations, there is a locality of reference which is not there in case of linked lists.

### Representation of Linked Lists
A linked list is represented by a pointer to the first node of the linked list. The first node is called the head node of the list. If the linked list is empty, then the value of the head node is NULL.

Each node in a list consists of at least two parts:
- data
- Pointer (Or Reference) to the next node`

In C/C++, we can represent a node using structure. Below is an example of a linked list node with integer data.
```
struct Node
{
    int data;
    struct Node* next; 
};
```
In Java, LinkedList can be represented as a class and a Node as a separate class. The LinkedList class contains a reference of Node class type.
```
class LinkedList 
{ 
    Node head;
    
    class Node 
    { 
        int data; 
        Node next; 
        Node(int d) {
          data = d;
        } 
    }
}
```