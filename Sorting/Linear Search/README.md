# Linear Seacrh

Linear Search means to sequentially traverse a given list or array and check if an element is present in the respective array or list. The idea is to start traversing the array and compare elements of the array one by one starting from the first element with the given element until a match is found or end of the array is reached.

![Linear Search](https://www.geeksforgeeks.org/wp-content/uploads/Linear-Search-660x241.png)

### Pseudo Code
```
Traverse the array using a for loop.
In every iteration, compare the target value with the current value of the array.
        If the values match, return the current index of the array.
        If the values do not match, move on to the next array element.
If no match is found, return -1.
```
### Time Complexity
```O(N)``` In worst case the element is in last position and compare at end of array.
