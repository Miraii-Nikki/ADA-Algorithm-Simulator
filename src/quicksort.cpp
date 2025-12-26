#include <iostream>
using namespace std;

void printIndent(int depth) {
    for (int i = 0; i < depth; i++)
        cout << "  ";
}

int partition(int arr[], int low, int high, int depth) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    printIndent(depth);
    cout << "Pivot = " << pivot << endl;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    printIndent(depth);
    cout << "After partition: ";
    for (int k = low; k <= high; k++)
        cout << arr[k] << " ";
    cout << endl;

    return j;
}

void quickSort(int arr[], int low, int high, int depth = 0) {
    if (low < high) {
        printIndent(depth);
        cout << "Sorting: ";
        for (int i = low; i <= high; i++)
            cout << arr[i] << " ";
        cout << endl;

        int p = partition(arr, low, high, depth + 1);

        quickSort(arr, low, p - 1, depth + 1);
        quickSort(arr, p + 1, high, depth + 1);
    }
}

void quickSortMenu() {
    int n;
    cout << "\nEnter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n--- Quick Sort Steps ---\n";
    quickSort(arr, 0, n - 1);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
