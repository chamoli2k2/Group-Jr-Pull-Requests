#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i <= n; i++) { 
        if (arr[i] < min) { 
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Min: " << findMin(arr, n) << endl;
    return 0;
}
