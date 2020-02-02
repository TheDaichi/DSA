#include <iostream>

/**
* arguments: array, x => the element of find and n => length of array
* low => 0 and high => n, length of array.
*/
fucntion leftMostIndex(int arr[], int x, int low, int high) {
  int mid = low + (high - low) / 2;

  if (arr[mid] == x && (mid != 0 || arr[mid - 1] != x))
    return mid;

  if (arr[mid] >= x)
    return leftMostIndex(arr, x, low, mid - 1);

  return leftMostIndex(arr, x, mid + 1, high);

}

int main(int argc, char const *argv[]) {

  return 0;
}
