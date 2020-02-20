#include<bits/stdc++.h>
using namespace std;

int rightIndex(int arr[], int n, int x) {
    int start = 0, end = (n - 1), mid;
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == x && (mid == end || arr[mid + 1] != x))
            return mid + 1;

        else if (arr[mid] <= x)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
};

int main() {
    int arr[5] = {1, 1, 1, 1, 0};
    int result_ = rightIndex(arr, 5, 1);
    cout << result_ << endl;
    return 0;
}