#include <iostream>
#include <utility>

using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    if (n <= 0) {
        // Handle empty array case
        return make_pair(0, 0); 
    }

    long long minElement = a[0];
    long long maxElement = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < minElement) {
            minElement = a[i];
        }

        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }

    return make_pair(minElement, maxElement);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    long long *arr = new long long[size]; 

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    pair<long long, long long> result = getMinMax(arr, size);

    cout << "Minimum Element: " << result.first << endl;
    cout << "Maximum Element: " << result.second << endl;

    
    delete[] arr;

    return 0;
}
