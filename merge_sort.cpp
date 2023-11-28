#include <iostream>
using namespace std;

int a[] = {43, 65, 87, 23, 66, 12};
int b[6]; // Declare an array 'b' to store the merged values

void merge(int low, int mid, int high) {
    int h = low;
    int i = low;
    int j = mid + 1;

    while ((h <= mid) && (j <= high)) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        } else {
            b[i] = a[j];
            j++;
        }
        i++;
    }

    if (h > mid) {
        for (int k = j; k <= high; k++) {
            b[i] = a[k];
            i++;
        }
    } else {
        for (int k = h; k <= mid; k++) {
            b[i] = a[k];
            i++;
        }
    }

    for (int k = low; k <= high; k++) {
        a[k] = b[k];
    }
}

void printarray(int arr[], int n) {
    cout << "printing array..." << endl;
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

void mergesort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main() {
    cout << "Array before sorting is: " << endl;
    printarray(a, 6);
    mergesort(0, 5); // The 'high' parameter should be one less than the size of the array
    cout << "Array after sorting: " << endl;
    printarray(a, 6);
    return 0;
}